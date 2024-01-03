#include <iostream>
#include <conio.h> // Note: The conio.h header is not standard C++. It's better to avoid using it.
using namespace std;

// Declaration of the class 'overloading'
class overloading {
    int num1; // Private data member to store the first number
    int num2; // Private data member to store the second number

public:
    // Setter function to set the values of 'num1' and 'num2'
    void setter(int a, int b) {
        num1 = a;
        num2 = b;
    }

    // Display function to print the values of 'num1' and 'num2'
    void display() {
        cout << "Number is: " << num1 << "i" << "+" << num2 << endl;
    }

    // Overloaded addition operator (+)
    overloading operator+(overloading x) {
        overloading temp; // Temporary object to store the result
        temp.num1 = num1 + x.num1; // Adding the corresponding 'num1' values
        temp.num2 = num2 + x.num2; // Adding the corresponding 'num2' values
        return temp; // Returning the result as a new 'overloading' object
    }
};

// Main function
int main() {
    overloading x1, x2, x3; // Creating objects of the class 'overloading' named 'x1', 'x2', and 'x3'

    x1.setter(10, 20); // Setting the values of 'num1' and 'num2' in 'x1'
    x2.setter(5, 5);   // Setting the values of 'num1' and 'num2' in 'x2'

    x3 = x1 + x2; // Using the overloaded addition operator to add 'x1' and 'x2' and storing the result in 'x3'

    x2.display(); // Calling the display function to print the values of 'x2'

    // Note: The 'conio.h' header is not a standard C++ header and is generally considered non-portable.
    // Consider removing it for portability.

    return 0; // Indicates successful program execution
}
