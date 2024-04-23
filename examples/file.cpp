#include <iostream>
#include <fstream> // You have to include this to read and write files.
#include <vector>
using namespace std;

int main() {
    // ofstream is for creating and writing files.
    // ifstream is for reading files.
    // fstream is a combination of ofstream and ifstream: creates, reads and writes files.
    // Instead of having two seperate objects for reading and writing, you can have a single fstream object.

    // To create and write a file, create a new ofstream object.
    ofstream wFile("filename.txt");

    // Writing to a file is like cout.
    wFile << "Hello World!\nHello\nWorld!";

    // Close the file after you're done with the file.
    wFile.close();

    // To read a file, create a new ifstream object.
    ifstream rFile("filename.txt");

    // Read the entire file
    if (rFile.is_open()) { // Check if the file is open before reading.
        string text;
        while (rFile) { // Repeat reading each character until the end of the file.
            text += rFile.get(); // Get the character.
        }
        cout << text << endl;
    } else {
        cout << "File isn't open" << endl;
    }

    // Re-open file for next example.
    vector<string> lines;
    rFile = ifstream("filename.txt");
    cout << endl;

    // Read every line of the file.
    if (rFile.is_open()) { // Check if the file is open before reading.
        vector<string> lines;
        string line;
        while (getline(rFile, line)) { // Repeat reading each line until the end of the file.
            lines.push_back(line); // Add the line to the vector.
        }
        for (string line : lines) { // Loop through each item in the vector.
            cout << line << endl;
        }
    } else {
        cout << "File isn't open" << endl;
    }

    // Close the file after you're done with the file.
    rFile.close();

    return 0;
}
