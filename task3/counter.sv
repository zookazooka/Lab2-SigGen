module counter #(
    parameter OFFSET_WIDTH = 8,
    parameter ADDRESS_WIDTH = 8
)(
// interface signals
    input  logic [OFFSET_WIDTH-1:0]      offset,
    input  logic                         clk,  // clock
    input  logic                         rst,  // reset
    input  logic                         rd, 
    input  logic                         wr, 
    output logic [ADDRESS_WIDTH-1:0]     countIncr, 
    output logic [ADDRESS_WIDTH-1:0]     countOffset 
);

//synchronous reset
always_ff @ (posedge clk) begin
    if (rd)
        if (rst)
            countIncr <= {ADDRESS_WIDTH{1'b0}};
        else 
            countIncr <= countIncr + 1'b1;
    
    if (wr)
        if (rst)
            countOffset <= {ADDRESS_WIDTH{1'b0}} + offset;
        else 
            countOffset <= countIncr + 1'b1 + offset;
end

endmodule