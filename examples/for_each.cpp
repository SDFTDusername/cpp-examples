#include <iostream>
#include <vector>
using namespace std;

int main() {
    string lettersArray[] = {"A", "B", "C"};
    vector<string> lettersVector({"A", "B", "C"});

    // You can loop through each item in an array or a vector using a for loop and ":".
    for (string letter : lettersArray) {
        cout << letter;
    }
    cout << endl;
    for (string letter : lettersVector) {
        cout << letter;
    }
    cout << endl;

    return 0;
}
