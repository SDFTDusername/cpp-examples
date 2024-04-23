#include <iostream>
#include <cstdint> // You have to include this to use bytes.
using namespace std;

// To use bytes, you can use the uint8_t datatype from the cstdint library.
typedef uint8_t byte; // This creates a datatype called byte which is exactly like uint8_t.

int main() {
    byte num = 0b10101010; // 170
    cout << num << endl; // cout prints uint8_t as chars, so this will print the 71st unicode character.

    return 0;
}
