#include <iostream>
#include <string.h>

using namespace std;
int main ()
{

int id;
string name;
string sem ;
char sec;
string dept;
cout<<"Enter id:";
cin>>id;
fflush(stdin);
cout<<"Enter name:";
getline(cin,name);
cout<<"Enter sem:";
getline(cin,sem);
cout<<"Enter sec:";
cin>>sec;
fflush(stdin);
cout<<"Enter Dept:";
getline(cin,dept);
cout<<"Studet detals:"<<endl;
cout<<"Id:"<<id<<endl;
cout<<"Name:"<<name<<endl;
cout<<"Sem:"<<sem<<endl;
cout<<"Sec:"<<sec<<endl;
cout<<"Dept:"<<dept<<endl;
return 0;

}
