import java.util.ArrayList;
import java.util.List;

import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.tree.*;

public class SamVisitor extends ExprBaseVisitor<String> {
    public List<Integer> instList = new ArrayList<>();
    @Override
    public String visitProg(ExprParser.ProgContext ctx) {
        System.out.println("Prog:");
        return visitChildren(ctx);
    }

    @Override
    public String visitStat(ExprParser.StatContext ctx) {
        System.out.print("Stat: " + ctx.getText());
        // int numChild = ctx.getChildCount();
        // for (int i = 0; i < numChild - 1; i++) {
        //     System.out.print("Child: " + ctx.getChild(i).getText() + "\t");
        // }
        // System.out.println();
        return visitChildren(ctx);
    }

    @Override
    public String visitExpr(ExprParser.ExprContext ctx) {
        System.out.println("Expr: " + ctx.getText());
        int numChild = ctx.getChildCount();
        System.out.print("Child count: " + numChild + "\t");
        for (int i = 0; i < numChild; i++) {
            if (ctx.getChild(i).getText().equals("("))
                System.out.print("Child: " + ctx.getChild(i).getText() + "\t");
        }
        System.out.println();
        return visitChildren(ctx);
    }
}
