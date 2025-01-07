#include <iostream>
using namespace std;
class A
{
protected:
    int p;
    public:
   void setp()
   {
       cout<<"Enter the value of P:";
       cin>>p;

   }

};
class B:protected A
{

public:
    int q;
    void setq()
    {
        cout<<"Enter the value of q:";
       cin>>q;
       setp();
    }
    void sum()
    {
        cout<<"sum"<<p+q;
    }
};
int main()

{
    B ob1;

    ob1.setq();
    ob1.sum();
}
