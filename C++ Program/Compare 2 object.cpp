#include <iostream>
using namespace std;

// Declaration of the class 'overloading'
class overloading {
    int num1; // Private data member to store the first number
    int num2; // Private data member (unused in the provided code)

public:
    // Setter function to set the value of 'num1'
    void setter(int a) {
        num1 = a;
    }

    // Display function to print the value of 'num1'
    void display() {
        cout << "Number is: " << num1 << "i" << "+" << num2 << endl;
    }

    // Overloaded greater-than operator (>)
    bool operator>(overloading x) {
        return num1 > x.num1;
    }

    // Overloaded less-than operator (<) [Note: There seems to be a mistake here; it should be num1 < x.num1]
    bool operator<(overloading x) {
        return num1 < x.num1; // Fix: It should be num1 < x.num1
    }
};

// Main function
int main() {
    overloading x1, x2, x3; // Creating objects of the class 'overloading' named 'x1', 'x2', and 'x3'

    x1.setter(10); // Setting the value of 'num1' in 'x1' to 10
    x2.setter(5);  // Setting the value of 'num1' in 'x2' to 5

    if (x1 > x2) {
        cout << "yes" << endl; // Printing "yes" if x1 is greater than x2
    } else if (x1 < x2) {
        cout << "No"; // Printing "No" if x1 is less than x2 [Note: There seems to be a mistake here; it should be x1 > x2]
    }

    return 0; // Indicates successful program execution
}
