#include<iostream>
using namespace std;

// Declaration of the class 'student'
class student {
private:
    string name; // Private data member to store the student's name
    int id;      // Private data member to store the student's ID

public:
    // Default constructor (no parameters)
    student() {
        // Initializing default values for name and ID
        this->name = "Tamim";
        this->id = 1007;
    }

    // Parameterized constructor with one parameter (name)
    student(string n) {
        // Setting the provided name and default ID
        this->name = n;
        this->id = 1007;
    }

    // Parameterized constructor with two parameters (name and ID)
    student(string n, int i) {
        // Setting the provided name and ID
        this->name = n;
        this->id = i;
    }

    // Member function to display the student's details
    void display(void) {
        cout << "Name : " << name << endl;
        cout << "Id   : " << id << endl;
    }
};

// Main function
int main() {
    cout << "\nDefault constructor called: \n";
    student obj1; // Creating an object of the class 'student' using the default constructor
    obj1.display(); // Calling the display function to print details of 'obj1'

    cout << "\nOne parameterized constructor called: \n";
    student obj2("Tamim*"); // Creating an object of the class 'student' using a one-parameterized constructor
    obj2.display(); // Calling the display function to print details of 'obj2'

    cout << "\nTwo parameterized constructor called: \n";
    student obj3("Tamim**", 1007); // Creating an object of the class 'student' using a two-parameterized constructor
    obj3.display(); // Calling the display function to print details of 'obj3'

    return 0; // Indicates successful program execution
}
