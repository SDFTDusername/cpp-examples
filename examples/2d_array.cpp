#include <iostream>
#include <vector>
using namespace std;

// define is like variables, but they replace every occurrence with the value, so the value is then hard-coded.
#define GRID_WIDTH 17
#define GRID_HEIGHT 16

int main() {
    // You can define a multi-dimensional array like this.
    bool grid[GRID_WIDTH][GRID_HEIGHT]; // The compiler sees this as bool grid[16][16].
    // Or like this.
    // bool grid[3][3] = {{true, false, true}, {false, true, false}, {true, false, true}};

    // You can do the same with vectors
    // vector<vector<bool>> grid(GRID_WIDTH, vector<bool>(GRID_HEIGHT)); // Create a vector containing 17 vectors each of size 16.

    // Fill grid with values
    for (int y = 0; y < GRID_HEIGHT; y++) { // Y starts first so that X can increment to 16 first.
        for (int x = 0; x < GRID_WIDTH; x++) {
            int i = x + y * GRID_WIDTH;
            if (y % 3 == 0)
                grid[x][y] = i % 2 == 0; // If the block of code is a single line, the if statement can have no curly braces.
            else
                grid[x][y] = false;
        }
    }

    // Print grid
    for (int y = 0; y < GRID_HEIGHT; y++) {
        for (int x = 0; x < GRID_WIDTH; x++) {
            cout << (grid[x][y] ? "#" : " "); // If grid[x][y] is true, print "#", else pribt " ".
        }
        cout << endl; // New lines
    }

    return 0;
}
