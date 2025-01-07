#include<iostream>
#include <stdlib.h>
using namespace std;
class worker
{
private:
    string name;
    int age;
    string adress;
    double salary;
public :
    void input()
    {
        cout<<"Enter Worker Name:";
        fflush(stdin);
        getline(cin,name);
        cout<<"Enter Age:";
        cin>>age;
        cout<<"Enter Adress:";
        fflush(stdin);
        getline(cin,adress);
        cout<<"Enter Salary:";
        cin>>salary;
    }
    void output()
    {
        cout<<"Worker Information:"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Adress:"<<adress<<endl;
        cout<<"Salary:"<<salary<<endl;
    }

};
int main ()
{
    worker w1,w2;
    w1.input();
    w2.input();
    w1.output();
    w2.output();
    return 0;
}

