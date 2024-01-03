//Object Pre-Increment
#include <iostream>
#include <conio.h> // Note: The conio.h header is not standard C++. It's better to avoid using it.
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

    // Note: The 'conio.h' header is not standard C++. Consider removing it for portability.

    // Note: The getch() function (from 'conio.h') is not used in this code.
    // It's common in console applications to use getch() to wait for a key press before closing the console window.
    // If you want to keep the console window open, you can add _getch() at the end.
    // Example: _getch();

    return 0; // Indicates successful program execution
}
