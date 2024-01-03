#include<iostream>
using namespace std;

// Forward declaration of class xyz to make it known to class abc
class xyz;

// Declaration of class abc
class abc {
private:
    int x; // Private data member to store the value

public:
    // Member function to set the value
    void set_value(int i) {
        x = i;
    }

    // Friend function declaration for max
    friend void max(xyz& n, abc& m);
};

// Declaration of class xyz
class xyz {
private:
    int x; // Private data member to store the value

public:
    // Member function to set the value
    void set_value(int i) {
        x = i;
    }

    // Friend function declaration for max
    friend void max(xyz& n, abc& m);
};

// Definition of the friend function max
void max(xyz& n, abc& m) {
    if (m.x > n.x) {
        cout << "Max value= " << m.x << "\n\n";
    } else if (m.x < n.x) {
        cout << "Max value= " << n.x << "\n\n";
    } else {
        cout << "Both are equal!\n\n";
    }
}

// Main function
int main() {
    abc a; // Creating an object of class abc
    xyz i; // Creating an object of class xyz

    a.set_value(15); // Setting a value for object 'a'
    i.set_value(15); // Setting a value for object 'i'

    max(i, a); // Calling the friend function 'max' with objects 'i' and 'a'

    return 0; // Indicates successful program execution
}
