module BasicAdder (
    input wire [31:0] x,
    input wire [31:0] y,
    output wire [31:0] z);

    reg [255:0] mem;

    assign z = x + y;
endmodule