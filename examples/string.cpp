#include <iostream>
#include <string> // You have to include this to use strings.
using namespace std;

int main() {
    string message = "Hello";
    message += " Wo"; // Hello Wo

    // This wont work because you are concatenating a string and a char array.
    // string message = "Hello" + " World!";
    // This will work because the second value is implicitly a string too.
    // string message = "Hello" + string(" World!");

    cout << message + "rld!" << endl; // Hello World!

    return 0;
}
