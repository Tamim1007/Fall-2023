#include<iostream>
using namespace std;

// Declaration of the class 'my_class'
class my_class {
public:
    // Constructor for the class, called when an object is created
    my_class() {
        cout << "Constructor is called!\n\n";
    }

    // Member function to display a message
    void display() {
        cout << "Function is called!\n\n";
    }
};

// Main function
int main() {
    my_class obj1; // Creating an object of the class 'my_class' named 'obj1'

    obj1.display(); // Calling the 'display' member function of 'obj1'

    my_class obj2; // Creating another object of the class 'my_class' named 'obj2'

    return 0; // Indicates successful program execution
}
