// Generated from Sam.g4 by ANTLR 4.13.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link SamParser}.
 */
public interface SamListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link SamParser#prog}.
	 * @param ctx the parse tree
	 */
	void enterProg(SamParser.ProgContext ctx);
	/**
	 * Exit a parse tree produced by {@link SamParser#prog}.
	 * @param ctx the parse tree
	 */
	void exitProg(SamParser.ProgContext ctx);
	/**
	 * Enter a parse tree produced by {@link SamParser#stat}.
	 * @param ctx the parse tree
	 */
	void enterStat(SamParser.StatContext ctx);
	/**
	 * Exit a parse tree produced by {@link SamParser#stat}.
	 * @param ctx the parse tree
	 */
	void exitStat(SamParser.StatContext ctx);
	/**
	 * Enter a parse tree produced by {@link SamParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterExpr(SamParser.ExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link SamParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitExpr(SamParser.ExprContext ctx);
}