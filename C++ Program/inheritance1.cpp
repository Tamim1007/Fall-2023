#include<iostream>
#include<conio.h> // Note: The conio.h header is not standard C++. It's better to avoid using it.
#include<string.h>
using namespace std;

// Declaration of the 'person' class
class person {
public:
    string name; // Public data member to store the name
    int age;     // Public data member to store the age
    int salary;  // Public data member to store the salary

    // Member function to display the details of a person
    void display() {
        cout << "Name   : " << name << endl;
        cout << "Age    : " << age << endl;
        cout << "Salary : " << salary << "$" << endl;
    }
};

// Declaration of the 'student' class, which inherits from the 'person' class
class student : public person {
public:
    int id; // Public data member to store the student ID

    // Member function to display the details of a student, including details from the 'person' class
    void display1() {
        display(); // Calling the display function from the 'person' class to print basic details
        cout << "ID     : " << id << endl; // Printing the student ID
    }
};

// Main function
int main() {
    student obj1; // Creating an object of the 'student' class named 'obj1'

    // Setting values for the data members in the 'person' and 'student' classes
    obj1.name = "Tamim";
    obj1.age = 20;
    obj1.salary = 00;
    obj1.id = 1007;

    cout << "Original class is called: \n";
    obj1.display(); // Calling the display function from the 'person' class to print details of the person

    cout << "\nInherited class is called: \n";
    obj1.display1(); // Calling the display1 function from the 'student' class to print details of the student

    // Note: The 'conio.h' header is not a standard C++ header and is generally considered non-portable.
    // Consider removing it for portability.

    return 0; // Indicates successful program execution
}
