#include <cstdint>
#include <iostream>
using namespace std;

// Bitwise XOR. The result in each position is 1 if only one of the two 
// bits is 1 but will be 0 if both are 0 or both are 1. 

int main () {

    uint8_t Memory = 0b10110000;
    int accumulator = 0;
    for (int i = 0; i < 8 ; i++){
        accumulator ^= (Memory >> i) & 1;
        cout << accumulator;
    }

return 0; 
}


