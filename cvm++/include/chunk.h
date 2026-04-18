#ifndef CHUNK_H
#define CHUNK_H

#include <cstdint>
#include <vector>
using namespace std;

// the instructions our VM will understand
// these are 1 byte instructions
enum class OpCode : uint8_t {
    OP_CONSTANT, // to Load a number
    OP_ADD,      // to Add two numbers
    OP_SUBTRACT, // to Subtract two numbers
    OP_MULTIPLY, // to Multiply two numbers
    OP_DIVIDE,   // to Divide two numbers
    OP_RETURN    // to Exit
};

// till now, our language only supports decimals (doubles)
using Value = double;

class Chunk {
public:
    vector<uint8_t> code;     // it stores the execution instructions
    vector<Value> constants;  // it stores actual numbers (like 10.5, 42.0)

    // these are Functions to add data to our vectors
    void writeChunk(uint8_t byte);
    int addConstant(Value value);
};

#endif