#include<iostream>
using namespace std;
class student
{
private:
    int id;
    int salary;
public:
    //student(int i, int s)       //constructor create for use outside the class;
    student(int i, int s)         //constructor define inside the class
    {
        int id=i;
        int salary= s;
        cout<<"Id     : " <<id <<endl;
        cout<<"Salary : " <<salary <<endl;
    };
};
/*student  :: student(int i, int s) //constructor define outside the class
{
    int id=i;
    int salary= s;
    cout<<"Id     : " <<id <<endl;
    cout<<"Salary : " <<salary <<endl;
}*/

int main()
{
    student st(655, 12600);


    //return 0;
}
