#include<iostream>
using namespace std;

// Declaration of the class 'distancee'
class distancee {
private:
    float feet; // Private data member to store feet
    float inch; // Private data member to store inches

public:
    // Default constructor to initialize 'feet' and 'inch' to 0
    distancee() {
        feet = 0;
        inch = 0;
    }

    // Member function to input values for 'feet' and 'inch'
    void input() {
        cin >> feet;
        cin >> inch;
    }

    // Overloaded subtraction operator (-) to perform distance subtraction
    distancee operator -(distancee obj2) {
        distancee temp; // Temporary object to store the result
        temp.feet = feet - obj2.feet; // Subtracting feet
        temp.inch = inch - obj2.inch; // Subtracting inches

        // Handling the case where inches go negative or exceed 12 inches
        if (temp.inch < 0) {
            temp.feet--; // Borrow 1 foot
            temp.inch += 12.0; // Adjust inches to be positive and less than 12
        }

        return temp; // Returning the result as a new 'distancee' object
    }

    // Member function to display the result
    void display() {
        cout << "\nFeet  : " << feet << "'\n";
        cout << "Inch  : " << inch << "''\n";
    }
};

// Main function
int main() {
    distancee obj1, obj2, result; // Creating objects of the class 'distancee' named 'obj1', 'obj2', and 'result'

    cout << "Enter the distance in feet and inches respectively: \n";

    cout << "Enter first value: \n";
    obj1.input(); // Inputting values for 'obj1'

    cout << "Enter second value: \n";
    obj2.input(); // Inputting values for 'obj2'

    result = obj1 - obj2; // Using the overloaded subtraction operator to subtract 'obj2' from 'obj1'

    result.display(); // Displaying the result

    return 0; // Indicates successful program execution
}
