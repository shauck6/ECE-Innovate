import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.tree.*;


public class MySamGenerator extends SamBaseVisitor<Integer> {
    public List<Integer> instList = new ArrayList<>();
    private Map<String, Integer> variableRegisters = new HashMap<>();
    int regCounter = 0;
    @Override
    public Integer visitProg(SamParser.ProgContext ctx) {
        int numLines = ctx.getChildCount();
        // System.out.println(numLines);
        return visitChildren(ctx);
    }

    @Override
    public Integer visitStat(SamParser.StatContext ctx) {
        // System.out.print("Stat: " + ctx.getText());
        int numChild = ctx.getChildCount();
        if (ctx.ID() != null) {

            String varName = ctx.getText().split("=")[0];
            // System.out.println("VarName: " + varName);
            Integer sourceReg = visit(ctx.expr());
            // System.out.println("ResultReg: R" + resultReg);
            
            int destReg = regCounter++;
            int newInst = buildMove(destReg, sourceReg);
            instList.add(newInst);
            variableRegisters.put(varName, destReg);
            instList.add(buildOutput(destReg));
            return destReg;
        }
        int destReg = visit(ctx.expr());
        instList.add(buildOutput(destReg));
        return destReg;
    }

    @Override
    public Integer visitExpr(SamParser.ExprContext ctx) {
        //if (ctx.getText() != "\n" && ctx.getText() != "\r")System.out.println("Expr: " + ctx.getText());
        // int numChild = ctx.getChildCount();
        // System.out.println("Here: " + ctx.getText());
        if (ctx.INT() != null) {

            int value = Integer.parseInt(ctx.getText());
            int destReg  = regCounter++;
            int newInst = buildLoadI(destReg, value);
            // System.out.println("NewLoad: " + value + " Into: R" + destReg);
            instList.add(newInst);
            return destReg;
        }

        if (ctx.ID() != null) {
            String value = (ctx.getText());
            return variableRegisters.get(value);
        }

        if (ctx.PLUS() != null) {
            // System.out.println("Left: " + ctx.expr(0).getText());
            int leftReg  = (visit(ctx.expr(0)));
            // System.out.println("Right: " + ctx.expr(1).getText());  
            int rightReg = (visit(ctx.expr(1)));  
            int destReg  = regCounter++;
            // System.out.println("ADD R" + destReg + ", R" + leftReg + ", R" + rightReg);
            int newInst = buildAdd(destReg, rightReg, leftReg);
            instList.add(newInst);
            return destReg;
        }
        // System.out.println(ctx.getText() + "Here");
        if (ctx.getText().charAt(0) == '(') {
            // System.out.println("List of contexts: " + ctx.expr(0).getText());
            return visit(ctx.expr(0));
        }
        
        return -1;
    }

    private int buildLoadI(int destReg, int value) {
        int newInst = 0x60000000;
        value &= 0x3FFF;
        newInst += value;
        destReg &= 0x1FF;
        newInst += destReg << 18;
        return newInst;
    }

    private int buildAdd(int destReg, int sourceReg1, int sourceReg2) {
        int newInst = 0x30000000;
        sourceReg1 &= 0x1FF;
        sourceReg2 &= 0x1FF;
        destReg &= 0x1FF;
        newInst += ((destReg << 18) + (sourceReg1 << 9) + sourceReg2);
        return newInst;
    }

    private int buildOutput(int sourceReg) {
        return 0x10000000 + (sourceReg << 18);
    }

    private int buildMove(int destReg, int sourceReg) {
        int newInst = 0xF0000000;
        destReg &= 0x1FF;
        newInst += (destReg << 18);
        sourceReg &= 0x1FF;
        newInst += sourceReg;
        return newInst;
    }
}
