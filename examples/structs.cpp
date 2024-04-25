#include <iostream>
#include <string>
using namespace std;

// If you need private variables and/or methods, use classes.
// Structs use less memory than classes and are often used to represent simple data types.

// You create a named struct like this.
struct Animal {
    string name;
    int age;
    bool isDog;
};

// Or like this.
struct Bird {
    string name = "Michael";
    int age = 2;
    bool isDog = false;
};

int main() {
    // There are multiple ways to create objects.
    Animal bird = {};
    Bird bird2;
    Animal cat;
    Animal dog = {"Stuart", 4, true};

    bird.name = "Bob";
    bird.age = 1;

    cat.name = "Muffin";
    cat.age = 2;

    cout << bird.name << endl;
    cout << bird.age << endl;
    cout << bird.isDog << endl;
    cout << endl;
    cout << bird2.name << endl;
    cout << bird2.age << endl;
    cout << bird2.isDog << endl;
    cout << endl;
    cout << cat.name << endl;
    cout << cat.age << endl;
    cout << cat.isDog << endl;
    cout << endl;
    cout << dog.name << endl;
    cout << dog.age << endl;
    cout << dog.isDog << endl;
    cout << endl;

    // You create a nameless struct like this.
    struct {
        string name;
        int age;
        bool isDog;
    } humanA;

    humanA.name = "Rad";
    humanA.age = 17;

    // Or like this.
    struct {
        string name = "Joe";
        int age = 34;
        bool isDog = false;
    } humanB;

    cout << humanA.name << endl;
    cout << humanA.age << endl;
    cout << humanA.isDog << endl;
    cout << endl;
    cout << humanB.name << endl;
    cout << humanB.age << endl;
    cout << humanB.isDog << endl;

    return 0;
}
