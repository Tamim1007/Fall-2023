#include<iostream>
using namespace std;

// Declaration of the class 'item'
class item {
    int num;   // Private data member to store the item number
    float cost; // Private data member to store the item cost

public:
    // Member function to get data for the item
    void get_data(int a, float b);

    // Member function to display the item data
    void put_data() {
        cout << "Number: " << num << "\n";
        cout << "Cost: " << cost << "\n";
    }
};

// Definition of the member function 'get_data'
void item::get_data(int a, float b) {
    num = a;
    cost = b;
}

// Main function
int main() {
    item x; // Creating an object of the class 'item' named 'x'

    cout << "object x: \n";

    x.get_data(100, 266.65); // Calling the 'get_data' member function to set data for 'x'
    x.put_data();           // Calling the 'put_data' member function to display data for 'x'

    return 0; // Indicates successful program execution
}
