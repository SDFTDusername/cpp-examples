#include <iostream>
using namespace std;

int main() {
    // While checks before running.
    int a;
    cin >> a; // Written twice.
    while (a == 1) {
        cin >> a;
    }
    cout << a << endl;

    // Do while always runs once, then checks.
    int b;
    do {
        cin >> b; // Written once.
    } while (b == 1);
    cout << a << endl;

    return 0;
}
