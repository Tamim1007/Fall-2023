//- Operator Overloading Using Real and Imaginary Number
#include <iostream>
using namespace std;

// Declaration of the Complex class
class Complex
{
    private:
      float real;  // Real part of the complex number
      float imag;  // Imaginary part of the complex number

    public:
       // Default constructor to initialize real and imag to 0
       Complex(): real(0), imag(0){ }

       // Function to input values for real and imag from the user
       void input()
       {
           cout<< "Enter numbers: ";
           cin >> real;
           cout<<"Enter Numbers: ";
           cin >> imag;
       }

       // Overloaded subtraction operator to subtract complex numbers
       Complex operator - (Complex s2)
       {
           Complex temp;
           temp.real = real - s2.real;
           temp.imag = imag - s2.imag;

           return temp;
       }

       // Function to display the complex number
       void display()
       {
           if(imag < 0)
               cout << real << imag << "i";
           else
               cout << real << "-" << imag << "i";
       }
};

// Main function
int main()
{
    // Declaration of Complex objects s1, s2, and result
    Complex s1, s2, result;

    // Input values for s1 and s2 from the user
    s1.input();
    s2.input();

    // Subtract s2 from s1 and store the result in the result object
    result = s1 - s2;

    // Display the result
    result.display();

    cout<<"\n\n";

    return 0;
}
