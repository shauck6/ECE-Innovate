`define LOADI 4'h6
`define ADD 4'h3
`define MOVE 4'hF
`define OUTPUT 4'h1

module Processor (
    input wire clk,
    output reg out_valid,
    output reg [31:0] z);

    reg [31:0] regs [511:0];

    reg [31:0] memory [0:255];
    reg [31:0] inst;
    reg [7:0] pc;

    initial begin
        $readmemh("program.mem", memory);
        pc = 0;
        out_valid = 0;
    end

    always @(posedge clk) begin
        inst <= memory[pc];
        pc <= pc+1;
    end

    wire [3:0] opCode = inst[31:28];
    wire [8:0] RS1 = inst[8:0];
    wire [8:0] RS2 = inst[17:9];
    wire [8:0] RD = inst[26:18];
    wire [31:0] IMM = inst & 'h3FFF;

    always @(posedge clk) begin
        out_valid <= 0;
        if (opCode == `LOADI) begin 
            regs[RD] <= IMM;
        end 
        else if (opCode == `MOVE) begin
            regs[RD] <= regs[RS1];
        end
        else if (opCode == `ADD) begin
            regs[RD] <= regs[RS1] + regs[RS2];
        end
        else if (opCode == `OUTPUT) begin
            z <= regs[RD];
            out_valid <= 1;
        end
        else begin
            pc <= pc-1;
        end
    end

endmodule
