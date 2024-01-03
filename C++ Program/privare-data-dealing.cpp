#include<iostream>
using namespace std;

class volume                            //class create
{
private:                                //private Access Specifiers
    int m, n, k;                        //private variable's
public:                                 //public Access Specifiers
    //int m, n, k;
    void get_data();                    //public member's function
    void print_data();                  //public member's function
};

void volume :: get_data()               //member function with scope resolution operator
{
    cout<<"Enter the values: \n";
    cin>>m>>n>>k;
}

void volume :: print_data()             //member function with scope resolution operator
{
    int volume = m * n * k;
    cout<<"Volumes is: "<<volume;
}

int main()                              //main function
{
    volume ob, ob1;                     //class type variable

    ob.get_data();
    ob.print_data();

    cout<<"\n\n";

    return 0;
}
