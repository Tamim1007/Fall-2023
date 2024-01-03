#include<iostream>
#include<string.h>
using namespace std;

// Declaration of the class 'book'
class book {
private:
    string name;  // Private data member to store the name of the book
    int page;      // Private data member to store the number of pages in the book
    float price;   // Private data member to store the price of the book

public:
    // Setter function to set the 'page' of the book
    void setPage(int);

    // Setter function to set the 'price' of the book
    void setPrice(float);

    // Setter function to set the 'name' of the book
    void setName(string);

    // Display function to print the values of the book
    void display();

    // Getter function to get the 'name' of the book
    string getName();

    // Getter function to get the 'page' of the book
    int getPage();

    // Getter function to get the 'price' of the book
    float getPrice();
};

// Definition of the setter functions
void book::setName(string name) {
    this->name = name;
}

void book::setPage(int page) {
    this->page = page;
}

void book::setPrice(float price) {
    this->price = price;
}

// Definition of the display function
void book::display() {
    cout << "The book name is  : " << name << endl;
    cout << "The book price is : " << price << "$" << endl;
    cout << "The book page is  : " << page << endl;
}

// Definition of the getter functions
string book::getName() {
    return name;
}

float book::getPrice() {
    return price;
}

int book::getPage() {
    return page;
}

// Main function
int main() {
    book b1, b2; // Creating objects of the class 'book' named 'b1' and 'b2'

    // Setting values for the first book using setter functions
    b1.setName("Programming!");
    b1.setPrice(22.65);
    b1.setPage(150);

    cout << "Display function is called!\n";
    b1.display(); // Calling the display function to print the details of the first book

    // Setting values for the second book using setter functions
    b2.setName("C++ Programming!");
    b2.setPrice(64.50);
    b2.setPage(999);

    cout << "\nGetter function is called!\n";
    cout << "The name is  : " << b2.getName() << endl;    // Calling getter function to get the name of the second book
    cout << "The price is : " << b2.getPrice() << "$" << endl; // Calling getter function to get the price of the second book
    cout << "The page is  : " << b2.getPage() << endl;    // Calling getter function to get the page count of the second book

    return 0;
}
