#include <iostream>
using namespace std;
class Known{
public:
string name;
public:
Known (){
string n;
cout<<"Enter name:";
getline(cin,n);
name=n;
}
Known(string s){
name=s;
}
string get_name(){
return name;
}
};
int main ()
{
Known ob1,Ob2("Akib");
cout<<"Name:"<<ob1.get_name()<<endl;
cout<<"Name"<<Ob2.get_name();
return 0;
}
