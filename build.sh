java -Xmx500M -cp "./antlr-4.13.2-complete.jar:$CLASSPATH" org.antlr.v4.Tool Expr.g4 -visitor -o ./antlr_generated

javac -cp ".:antlr-4.13.2-complete.jar" antlr_generated/*.java SamVisitor.java Main.java

java -cp ".:antlr-4.13.2-complete.jar:antlr_generated:." Main

verilator --cc Processor.v --exe sim_main.cpp

make -C obj_dir -f VProcessor.mk VProcessor