#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    // The cstdint library contains different types of ints.
    // Unsigned means that the number does not go negative.

    // 64-bit integers will work on 32-bit computers, but may be slower.

    uint8_t num5 = 2; // Unsigned 8-bit integer, 0 to 255
    uint16_t num6 = 2; // Unsigned 16-bit integer, 0 to 65535
    uint32_t num7 = 2; // Unsigned 32-bit integer, 0 to 4294967295
    uint64_t num8 = 2; // Unsigned 64-bit integer, 0 to 18446744073709551615

    int8_t num1 = 2; // Signed 8-bit integer, -128 to 127
    int16_t num2 = 2; // Signed 16-bit integer, -32768 to 32767
    int32_t num3 = 2; // Signed 32-bit integer, -2147483648 to 2147483647
    int64_t num4 = 2; // Signed 64-bit integer, -9223372036854775808 to 9223372036854775807

    return 0;
}
