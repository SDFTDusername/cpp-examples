#include <iostream>
#include <string>
using namespace std;

int main() {
    // * are pointers which store the memory address as its value.
    string original = "pizza";
    string* ptr = &original;
    cout << original << endl; // pizza
    cout << &original << endl; // 0x61fde0

    cout << ptr << endl; // 0x61fde0

    // Getting the pointer of a pointer gets the value of that memory address.
    cout << *ptr << endl; // pizza

    // You can also set the value of the original variable like this.
    *ptr = "banana";
    cout << original << endl; // banana

    // Read more at https://www.w3schools.com/cpp/cpp_pointers.asp

    return 0;
}
