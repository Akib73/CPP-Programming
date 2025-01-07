#include<iostream>
using namespace std;
class example
{
private:
    int var,imag,real;
public:
    example () {}
    example(int m)
    {
        var=m;
    }
    example(int x,int y)
    {
        imag= x;
        real=y;
    }
    void calculate1()
    {
        cout<<"Sumssion1:"<<var<<endl;
    }
    void calculate2()
    {
        cout<<"Sumssion2:"<<imag+real<<endl;
    }
};

int main ()
{
int a,b,c;
cout<<"Enter var:";
cin>>a;
cout<<"Enter imaginary;";
cin>>b;
cout<<"Enter real:";
cin>>c;
example ob1(a),ob2(b,c),ob3;
ob1.calculate1();
ob1.calculate2();
ob2.calculate2();


}
