#include <iostream>
using namespace std;
class sub
{
public:
int m,n;
sub(int a,int b)
{
cout <<"Enter value of A: ";
cin>>a;
cout<<"Enter value of B: ";
cin>>b;
m=a;
n=b;
}
void subtract ()
{
try{

if(m<=n)
{

throw 1;
}
else
{
int c= m-n;
cout<<"A-b="<<c;
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
    int l ,m;
sub a(l,m);
a.subtract();
}
