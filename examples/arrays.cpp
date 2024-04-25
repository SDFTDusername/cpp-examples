#include <iostream>
#include <string>
using namespace std;

int main() {
    // You define an empty array like this.
    // string letters[0];
    // You define an array with items like this.
    // string letters[] = {"A", "B", "C"};

    string letters[] = {"A", "B", "C"};

    // To get the size of an array, you divide the size of the array by the size of the data type.
    int arraySize = sizeof(letters) / sizeof(string);

    cout << letters[0] << endl; // A
    cout << arraySize << endl; // 3

    cout << endl;
    for (int i = 0; i < arraySize; i++) {
        cout << letters[i] << endl;
    }

    return 0;
}
