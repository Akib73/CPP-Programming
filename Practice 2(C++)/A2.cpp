#include <iostream>
using namespace std;
class large
{
public:

void big ()
{
int a;
cout <<"Enter Number: ";
cin>>a;
try{

if(a<=10)
{

throw 1;
}
else
{

cout<<a<<"This number is gatter than 10";
}
}
catch (int k)
{
cout<<"Error";
}
}



};
int main ()
{
large ob1;
ob1.big();
}
