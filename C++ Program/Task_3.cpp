//Object Post-Increment
#include <iostream>
using namespace std;

// Declaration of the class 'overloading'
class overloading
{
    int num; // Private data member 'num'
public:
    // Member function to input a value into 'num'
    void input(int n)
    {
        num = n;
    }

    // Overloaded prefix increment operator (++num)
    void operator++()
    {
        num = num + 1;
    }

    //Friend function to overload postfix increment operator (num++)
    friend overloading operator++(overloading obj, int)
    {
        overloading tmp;
        tmp.num = obj.num + 1;
        return tmp;
    }

    // Member function to output the value of 'num'
    void output()
    {
        cout << num;
    }
};

// Main function
int main()
{
    overloading A, B; // Creating objects of the class 'overloading' named 'A' and 'B'

    A.input(5); // Inputting the value 5 into the 'num' member of object 'A'

    B = A++; // Using the overloaded postfix increment operator to create a new object 'B' with the original value of 'A'

    B.output(); // Outputting the value of 'B'


    return 0; // Indicates successful program execution
}
