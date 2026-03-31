# ECE-Innovate
ECE Innovate Thread Challenge (Systems Architecture)

# Project Summary:
For this project I have created a simple language, a compiler to take a file in that language and output a machine code file, to then run on a processor that I created. I have decided to call these the SAM language and the SAM Processor. SAM stands for Simple And Manageable because I set out to make this project to display how easy it can be to implement a programming language, as well as a processor to complete whatever tasks you require.

## Language Specifics:
The language I created is an offshoot of a basic language that has no functions or branches, it is simply a files where each line is a statement containing one or more expressions. I changed the language a little to simplify it so that it only accepts addition as an opertation. So each statement can either be an assigning statement with a variable on the left, or some series of expressions which could include variables or numbers, addition, and also has parentheses. I wanted to keep the language this simple to show the very basics as grammars and languages get complicated quickly. I also wanted to leave it in a state where it would be easy to add other features like subtraction.

## ANTLR Lexer and Parser
Once I have the grammar file written, I used the ANTLR tool, which can take in an input grammar, and then output a lexer and a parser to check that a given input file is a valid version of that file. This tool is widely popular and has many features to it so I knew by using this it gives an avenue to explore for those curious.

## Visitor File/Code Generator
Once a program file is run through a lexer and parser, the output is a parse tree, which when traversed can the produce the series of instructions for a given processor to run. Modern compilers often also contain a middle end where optimizations are done, but for the simplicity of this language I forwent any optimizations. Also in modern compilers they create intermediate languages from the front end, so that a back end compiler can be written based on that instead of needing a different back end for every possible language. Then each back end is made specifically for a target acrchitecture depending on which processor the code is being run on. For this project however I also skipped over the many steps of a back end compiler, and I took the parse tree from the front end, and translated it to machine code that can be directly read on my processor.

## SAM ISA
Processors have instruction sets based on their architecture and there are plenty of examples out there to draw from. However in my processor I knew I only had to complete four functions: Loading a number value, Moving that value to a register that represents a variable, Adding the values of two registers, and outputing the value of a register from the processor. The opcode and bits of the ISA are as follows:

## Instruction Set Architecture

| Instruction | Opcode (31:28) | RD (26:18) | RS1 (17:9) | RS2 (8:0) | IMM (13:0) |
|-------------|----------------|------------|------------|-----------|------------|
| LOADI       | 0x6            | ✓          | —          | —         | ✓          |
| ADD         | 0x3            | ✓          | ✓          | ✓         | —          |
| OUTPUT      | 0x1            | —          | ✓ (26:18)  | —         | —          |
| MOVE        | 0xF            | ✓          | —          | ✓ (8:0)   | —          |

### Notes
- **LOADI** loads a 14-bit immediate value into a destination register
- **ADD** adds RS1 and RS2 and stores the result in RD
- **OUTPUT** outputs the value of a register to the simulation (register field sits at RD position 26:18)
- **MOVE** copies a value from RS1 into RD, bits 17:9 are unused

## SAM Processor
Finally, we have the Sam processor. As the name suggests the processor is a very small module written in verilog that has a certain amount of memory and registers. The memory is used to store the instructions and the registers are used to store the values in the statements as well as the variables. The processor works in essentially two stages; on the first clock cycle the processor loads in the next instruction from memory, and on the next cycle taking that instruction, decoding it, and performing an action based on what instruction it is. A few of the contraints currently is that there is only room for 512 registers and 256 instructions. This means you can only have 512 unique variables, or literal numbers, or a combination of both.

## Improvements to Look At
- Addiing new operations to the language (Subtraction for example)
- Adding branches, conditionals, and functions to the language (Which would also include updating the ISA)
- Performing optimizations in the compiler before outputting the instructions
- Adding more steps to the processor to improve performance
