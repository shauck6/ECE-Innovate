java -Xmx500M -cp "./antlr-4.13.2-complete.jar:$CLASSPATH" org.antlr.v4.Tool Sam.g4 -visitor -o ./antlr_generated

javac -cp ".:antlr-4.13.2-complete.jar" antlr_generated/*.java MySamGenerator.java Main.java

java -cp ".:antlr-4.13.2-complete.jar:antlr_generated:." Main

verilator --cc SamProcessor.v --exe sim_main.cpp

make -C obj_dir -f VSamProcessor.mk VSamProcessor