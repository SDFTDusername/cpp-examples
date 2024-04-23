#include <iostream> # You have to include this to read and write files.
#include <fstream> # You have to include this to read and write files.
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

    // Use the get function to read a single character from the file.
    string text;
    if (rFile.is_open()) { // Check if the file is open before reading.
        while (rFile) { // Repeat reading each character until the end of the file.
            text += rFile.get(); // Get the character
        }
        cout << text << endl;
    } else {
        cout << "File isn't open" << endl;
    }

    // Close the file after you're done with the file.
    rFile.close();

    return 0;
}
