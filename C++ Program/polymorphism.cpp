#include<iostream>
using namespace std;

// Function to process user input and display relevant information based on the button pressed
void press_button(int n) {
    if (n == 0) {
        cout << "Your balance is: \n"; // Displaying balance information
    }
    else if (n == 1) {
        cout << "Your remaining data: \n"; // Displaying remaining data information
    }
    else if (n == 2) {
        cout << "Your data pack is: \n"; // Displaying data pack information
    }
    else if (n == 3) {
        cout << "You are eligible for those packs: \n"; // Displaying eligibility information
    }
}

// Main function
int main() {
    int n;

    cout << "Press your button: \n";
    cout << "Press 0 to show your balance \n";
    cout << "Press 1 to show your remaining data: \n";
    cout << "Press 2 to show your data pack: \n";
    cout << "Press 3 to show your eligible data packs: \n\n";

    cin >> n; // Accepting user input

    press_button(n); // Calling the press_button function to display information based on user input

    return 0; // Indicates successful program execution
}
