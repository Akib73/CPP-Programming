#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int id;

    public:
        student ()
        {
            cout<<"Enter Student Name:";
            getline(cin ,name);
            cout<<"Enter Student ID:";
            cin>>id;


        }
        void print ()
        {

            cout<<"Stuent Name:"<<name<<endl;
            cout<<"Student ID:"<<id<<endl;

        }
        ~student()
        {
            cout<<"Distructing.......";
        }
};
int main ()
{

    student ob1;
    ob1.print();
}
