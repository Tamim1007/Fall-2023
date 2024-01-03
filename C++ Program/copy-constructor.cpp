#include<iostream>
using namespace std;

class student               //create  class
{
private:                    //private attribute
    int roll;
    string name;
    float result;
public:                     //public attribute
    student(int r, string n, float res)     //constructor declare
    {
        roll=r;
        name=n;
        result=res;
        cout<<"\nConstructor is called\n";
        cout<<"Roll   : "<<roll<<endl;
        cout<<"Name   : "<<name<<endl;
        cout<<"Result : "<<result<<endl;
    };
    student(student &obj);                  //copy constructor declare
};

student :: student(student &obj)            //copy constructor
{
    roll=obj.roll;
    name=obj.name;
    result=obj.result;
    cout<<"\nCopy Constructor is called\n";
    cout<<"Roll   : "<<roll<<endl;
    cout<<"Name   : "<<name<<endl;
    cout<<"Result : "<<result<<endl;
}


int main()
{
    student obj(655, "Toukir", 3.35);       //create object of class data type & called constructor
    student obj1(obj);                      //create object of class data type & called copy constructor
    student obj2(646, "Rici", 2.85);       //create object of class data type & called constructor


    return 0;
}
