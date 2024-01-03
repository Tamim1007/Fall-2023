#include<iostream>
using namespace std;

// Declaration of the class 'complex'
class complex {
private:
    int real; // Private data member to store the real part
    int imag; // Private data member to store the imaginary part

public:
    // Default constructor to initialize 'real' and 'imag' to 0
    complex(): real(), imag() {}

    // Member function to input values for 'real' and 'imag'
    void input() {
        cout << "Enter real and imaginary number: \n";
        cin >> real >> imag;
    }

    // Overloaded subtraction operator (-) to perform complex number subtraction
    complex operator -(complex obj1) {
        complex temp; // Temporary object to store the result
        temp.real = real - obj1.real; // Subtracting real parts
        temp.imag = imag - obj1.imag; // Subtracting imaginary parts
        return temp; // Returning the result as a new complex number object
    }

    // Member function to display the result
    void display() {
        cout << "\nResult is: " << real << " + " << imag << "i";
    }
};

// Main function
int main() {
    complex obj1, obj2; // Creating objects of the class 'complex' named 'obj1' and 'obj2'

    cout << "First value: \n";
    obj1.input(); // Inputting values for 'obj1'

    cout << "Second value: \n";
    obj2.input(); // Inputting values for 'obj2'

    complex result; // Creating an object to store the result of subtraction
    result = obj1 - obj2; // Using the overloaded subtraction operator to subtract 'obj2' from 'obj1'

    result.display(); // Displaying the result

    cout << "\n\n";

    return 0; // Indicates successful program execution
}
