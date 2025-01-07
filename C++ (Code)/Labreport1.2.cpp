#include <iostream>
using namespace std;
class employ
{
private:
    int id;
    string name;
    double salary;
public:
    void input()
    {
        cout<<"Enter Employ ID:";
        cin>>id;
        cout<<"Enter Name:";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter Salary:";
        cin>>salary;
    }
    void show ()
    {
         cout<<"Employ Information:"<<endl;
        cout<<"ID:"<<id<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
};
int main ()
{
employ e1,e2;
e1.input();
e2.input();
e1.show();
e2.show();
return 0;
}



