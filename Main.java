import java.nio.file.Path;

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
        CharStream input = CharStreams.fromPath(Path.of("correct.expr"));

        // 2. Lex it
        counterErrorListener listener = new counterErrorListener();
        ExprLexer lexer = new ExprLexer(input);
        lexer.addErrorListener(listener);
        CommonTokenStream tokens = new CommonTokenStream(lexer);

        // 3. Parse it
        ExprParser parser = new ExprParser(tokens);
        ParseTree tree = parser.prog();

        //int lexerErrors  = lexer.getNumberOfErrors();
        int parserErrors = parser.getNumberOfSyntaxErrors();

        // 4. Run your visitor on it if there are no errors
        if (parserErrors == 0 && listener.count == 0) {
            SamVisitor visitor = new SamVisitor();
            visitor.visit(tree);
            System.out.println(visitor.instList.isEmpty());
        }
    }
}
