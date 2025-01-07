#include <iostream>
#include<stdlib.h>
using namespace std;
class worker{
private:
string name;
int id;
int age;
string adress;
int salary;
public:
void input(){
cout<<"Enter Employ id :";
cin>>id;
cout<<"Enter Employ name:";
fflush(stdin);
getline(cin,name);
cout<<"Enter age:";
cin>>age;
cout<<"Enter Adress:";
fflush(stdin);
getline(cin,adress);
cout<<"Enter Salary:";
cin>>salary;
}
void output(){
cout<<id<<"\t\t";
cout<<name<<"\t\t";
cout<<age<<"\t\t";
cout<<adress<<"\t\t";
cout<<salary<<"\t\t"<<endl;
};
};
int main ()
{
worker w1,w2,w3;
w1.input();
w2.input ();


cout<<"ID"<<"\t\t"<<"Name"<<"\t\t"<<"Age"<<"\t\t"<<"Address"<<"\t\t\t"<<"Salary"<<endl;
w1.output();
w2.output();

}
