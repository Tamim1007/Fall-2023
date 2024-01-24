//Object Pre-Increment
#include <iostream>
using namespace std;

// Declaration of the class 'overloading'
class overloading {
    int num; // Private data member 'num'
public:
    // Member function to input a value into 'num'
    void input(int n) {
        num = n;
    }

    // Overloaded prefix increment operator (++num)
    void operator++() {
        num = num + 1;
    }

    // Member function to output the value of 'num'
    void output() {
        cout << num;
    }
};

// Main function
int main() {
    overloading A; // Creating an object of the class 'overloading' named 'A'

    A.input(5); // Inputting the value 5 into the 'num' member of object 'A'

    ++A; // Using the overloaded prefix increment operator to increment the value of 'num'

    A.output(); // Outputting the updated value of 'num'

    return 0; // Indicates successful program execution
}
