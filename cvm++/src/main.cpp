#include <iostream>
#include "chunk.h"
using namespace std;

int main() {
    Chunk chunk;

    // We cast our enum to a uint8_t to store it in the byte array
    chunk.writeChunk(static_cast<uint8_t>(OpCode::OP_RETURN));//static_cast<unit8_t> just do this:->We know that under the hood, OP_RETURN is actually just a 1-byte number (because we wrote : uint8_t in the definition). We need a way to tell the compiler: "Relax, I know what I am doing. Please peel off the 'OpCode' label and just give me the raw number underneath."
    //That is exactly what static_cast<uint8_t>(...) does.

    cout << "Day 1 Complete: Chunk created and OP_RETURN loaded. Array size: " 
              << chunk.code.size() << endl;

    return 0;
}