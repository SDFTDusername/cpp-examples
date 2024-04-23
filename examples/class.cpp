#include <iostream>
#include <string>
using namespace std;

// If you only need public variables, you can use structs.

class Animal {
    public: // Public means everything can access this.
        string name;
        int age;

        Animal(bool isDog = false) { // Constructor
            _isDog = isDog;
        }

        bool isDog() {
            return _isDog;
        }

        void setIsBird(bool isBird) {
            _isBird = isBird;
        }
    protected: // Protected means only this class and other classes that inherit from this class can access this.
        char _isBird;
    private: // Private means only the methods of this class can access this.
        bool _isDog;

}; // End the class with a semicolon.

// You can make classes inherit from other classes.
class Bird: public Animal {
    public:
        Bird(bool isBird = false) { // Constructors aren't inherited
            _isBird = isBird;
        }

        void chirp() {
            if (_isBird) {
                cout << name << " has chirped." << endl;
            }
        }
};

int main() {
    // If the class has a constructor, you can create the object like this.
    Animal dog = new Animal(true);

    // If the class has no constructor, you can create the object like this.
    Animal cat;

    dog.name = "Stuart";
    dog.age = 4;
    // This returns an error because _isDog is private.
    // dog._isDog = false

    cat.name = "Muffin";
    cat.age = 2;

    cout << dog.name << endl;
    cout << dog.age << endl;
    cout << dog.isDog() << endl;
    cout << endl;
    cout << cat.name << endl;
    cout << cat.age << endl;
    cout << cat.isDog() << endl;
    cout << endl;

    Bird bird = new Bird(true);
    bird.name = "Brick";
    bird.age = 29;
    bird.chirp();

    return 0;
}
