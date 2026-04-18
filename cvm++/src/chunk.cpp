#include "chunk.h"

// to push a single byte (instruction) to the end of our code array
void Chunk::writeChunk(uint8_t byte) {
    code.push_back(byte);
}

// Pushes a number into our constant pool and returns its index location
// We return the index so the OpCode knows where to find the number later
int Chunk::addConstant(Value value) {
    constants.push_back(value);
    return constants.size() - 1;
}