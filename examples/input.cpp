#include <iostream> // You have to include this to print, get user input, and use getline.
#include <string>
using namespace std;

int main() {
    int intInput;
    float floatInput;
    double doubleInput;
    bool boolInput;
    char charInput;
    string stringInput;

    // cin takes user input and puts it in a variable.

    cout << "Input int: "; // No new line
    cin >> intInput;
    cout << "int: " << intInput << endl;

    cout << "Input float: ";
    cin >> floatInput;
    cout << "float: " << floatInput << endl;

    cout << "Input double: ";
    cin >> doubleInput;
    cout << "double: " << doubleInput << endl;

    cout << "Input bool (1 or 0): ";
    cin >> boolInput; // This takes in 0 or 1.
    cout << "bool: " << boolInput << endl;

    cout << "Input char: ";
    cin >> charInput;
    cout << "char: " << charInput << endl;

    // cin considers whitespace (space, tab, etc) as terminating characters, so you should use the getline function.
    cout << "Input string: ";
    cin.ignore(); // Run this if you have asked for user input before
    getline(cin, stringInput);
    cout << "string: " << stringInput << endl;

    return 0;
}
