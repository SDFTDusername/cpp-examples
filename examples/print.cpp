#include <iostream> // You have to include this to print.
using namespace std;

int main() {
    // cout doesn't automatically end the print with a new line, so you must add "\n" or endl.
    cout << "Hello World!" << endl;

    // cout can print multiple data types such as int, float, bool, char, string, etc.
    cout << 5 << endl;
    cout << 5.2 << endl;
    cout << true << endl;
    cout << 'A' << endl;

    // You can also print the same or other data types at the same time.
    cout << "Total: " << 5 << endl;
    cout << 6 << " apple(s)" << endl;

    return 0;
}
