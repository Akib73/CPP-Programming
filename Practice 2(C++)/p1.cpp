#include<iostream>
using namespace std;
class A
{
protected:
    int w;
    int b;
public :
    void seta(int a)
    {
        w=a;
    }
    void setb(int m)
    {

        b=m;

    }
};
class B:protected A
{
public :
     int b;
     int c;
     seta(b);
     setb(c);
    void area()
    {
        int c=w*b;
        cout <<c;
    }
};
int main ()
{

    B ob1;
    ob1.seta(5);
    ob1.setb(6);
    ob1.area();
}
