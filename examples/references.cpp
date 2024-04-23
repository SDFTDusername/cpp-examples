#include <iostream>
#include <string>
using namespace std;

int main() {
    // & are references.
    string original = "pizza";
    string &refr = original;
    cout << original << endl; // pizza
    refr = "banana"; // Since refr is a reference to original, it directly edits original.
    cout << original << endl; // banana

    // & can also get the memory address.
    cout << &original << endl; // 0x61fde0

    // Read more at https://www.w3schools.com/cpp/cpp_references.asp

    return 0;
}
