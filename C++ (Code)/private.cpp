#include<iostream>
#include <string.h>
using namespace std;

class student{
private:
int id;
string name;
public:
void input(){
cin>>id;
cin.ignore();
getline(cin,name);
}
void show ()
{
cout<<id<<endl;
cout<<name<<endl;
}
};
int main ()
{
student s1,s2,s3;
s1.input();
s1.show ();
s2.input();
s2.show ();
s3.input();
s3.show ();
};
