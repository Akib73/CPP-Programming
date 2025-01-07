#include<iostream>
using namespace std;
class A
{
protected:
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
private:
    int b;
public:
    void setb()
    {
        seta();
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
    ob1.setb();
    ob1.sum();
}

