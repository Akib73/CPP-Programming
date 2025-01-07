//2.WRITE A C++ PROGRAM TO DEMONSTRATE CONSTRUCTOR OVERLODING CONCEPT.
#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int id;
public:
    student()
    {
        cout<<"Enter Student Name:";
        getline(cin,name);
        cout<<"Enter Student ID:";
        cin>>id;
    }
    student(string n,int m)
    {
        name =n;
        id=m;
    }
    void show()
    {
        cout<<" Student Name:"<<name<<endl;
        cout<<" Student ID:"<<id<<endl;
    }
};
int main()
{
    student ob1;
    ob1.show();
    cout<<"2nd Object"<<endl;
    student ob2("Sumon",40);
    ob2.show();
}
