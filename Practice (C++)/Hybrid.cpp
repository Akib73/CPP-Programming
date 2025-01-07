#include<iostream>
using namespace std;
class A     //Base class
{
public:
int l;
void len()
{
cout<<"\n\nLength :::\t";
cin>>l;
}
};
class B :public A
{
public:
int b,c;
void l_into_b()
{
len();
cout<<"\n\nBreadth :::\t";
cin>>b;
c=b*l;
}
};

class C
{
public:
int h;
void height()
{
cout<<"\n\nHeight :::\t";
cin>>h;
}
};
class D:public B,public C
{
public:
int res;
void result()
{
l_into_b();
height();
res=h*c;
cout<<"\n\nResult (l*b*h) :::\t"<<res<<endl;
}
};
int main()
{
D d1;
d1.result();
}

