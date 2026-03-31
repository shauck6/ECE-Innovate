import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.List;

import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.tree.*;


public class Main {

    static class counterErrorListener extends BaseErrorListener {
        int count = 0;

        @Override
        public void syntaxError(Recognizer<?,?> recognizer, Object offendingSymbol, int line, int charPositionInLine, String msg, RecognitionException e) {
            count++;
        }
    }
    public static void main(String[] args) throws Exception {
        
        // 1. Read source code from a file.
        CharStream input = CharStreams.fromPath(Path.of("correct.Sam"));

        // 2. Lex it
        counterErrorListener listener = new counterErrorListener();
        SamLexer lexer = new SamLexer(input);
        lexer.addErrorListener(listener);
        CommonTokenStream tokens = new CommonTokenStream(lexer);

        // 3. Parse it
        SamParser parser = new SamParser(tokens);
        ParseTree tree = parser.prog();

        //int lexerErrors  = lexer.getNumberOfErrors();
        int parserErrors = parser.getNumberOfSyntaxErrors();

        // 4. Run your visitor on it if there are no errors
        if (parserErrors == 0 && listener.count == 0) {
            MySamGenerator visitor = new MySamGenerator();
            visitor.visit(tree);
            writeToFile("program.mem", visitor.instList);
        }
    }


    public static void writeToFile(String filename, List<Integer> instructions) throws IOException {
        List<String> lines = new ArrayList<>();
        for (int instr : instructions) {
            // Write each instruction as an 8 digit hex value, one per line
            lines.add(String.format("%08x", instr));
        }
        lines.add(String.format("%08x", 0x00000000));
        Files.write(Path.of(filename), lines);
    }
}
