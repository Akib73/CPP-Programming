#include<iostream>
using namespace std;
class A
{
public:
    int a;
    public:

        void seta()
        {
            cout<<"Enter the value of A:";
            cin>>a;
        }
};
class B:public A
{
protected:
    int b;
public:

    void setb()
    {

        cout<<"Enter the value of B:";
        cin>>b;

    }
    void sum()
    {
        cout<<"Summation of A,B:"<<a+b;
    }
};
int main()
{
    B ob1;


    ob1.seta();
    ob1.setb();
    ob1.a=10;
    ob1.b=20;
    ob1.sum();
}

