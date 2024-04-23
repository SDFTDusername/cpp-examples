#include <iostream>
#include <vector> // You have to include this to use vectors.
#include <string>
using namespace std;

int main() {
    // Vectors are like arrays, but easier to manage, and uses more memory.

    // You define an empty vector like this.
    // vector<string> letters;
    // You define a vector with items like this.
    // vector<string> letters({"A", "B", "C"});

    vector<string> letters({"A", "B", "C"});

    // To get the size of a vector, you can use the size function.
    cout << letters.size() << endl; // 3

    // You can also add and remove values from vectors.
    letters.push_back("D"); // Adds D as the last item.
    letters.pop_back(); // Removes the last item.
    letters.insert(letters.begin() + 2, "A"); // Adds A at index 2.
    // Read more at https://cplusplus.com/reference/vector/vector/

    cout << endl;
    for (int i = 0; i < letters.size(); i++) {
        cout << letters[i] << endl;
    }

    return 0;
}
