module counter #(
    parameter INCR_WIDTH = 8,
    parameter ADDRESS_WIDTH = 8
)(
//interface signals
    input  logic [INCR_WIDTH-1:0]        incr,
    input  logic                         clk,    //clock
    input  logic                         en,     //counter enable
    input  logic                         rst,    //reset
    output logic [ADDRESS_WIDTH-1:0]     count   //output
);

//synchronous reset
always_ff @ (posedge clk)

    if (en) begin
        if (rst) count <= {ADDRESS_WIDTH{1'b0}};
        else     count <= count + incr;
    end

endmodule