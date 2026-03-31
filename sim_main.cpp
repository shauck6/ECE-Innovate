#include "VSamProcessor.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    VSamProcessor* top = new VSamProcessor;
    int line = 0;
    std::cout << "Processor Running... " << std::endl;
    for (int i = 0; i < 100; i++) {
        top->clk = 1; top->eval();  // rising edge

        if (top->out_valid) {
            std::cout << "OUTPUT " << line++ << ": " << top->z << std::endl;
        }

        top->clk = 0; top->eval();  // falling edge
    }

    delete top;
    return 0;
}