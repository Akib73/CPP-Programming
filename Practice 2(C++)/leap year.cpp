
#include<iostream>
using namespace std;
class know
{
public:
    int a;
public:
    void  leap_year()
    {
    cout <<"Enter Number:";
    cin >>a;
    if(a%400==0)
    {
    cout<<"It is leap year";
    }
    else if(a%100==0)
    {
    cout<<"It is a leap year";
    }

    else if(a%4==0)
    {
        cout<<"It is a leap year";
    }
    else
    {
        cout<<"It is not  a leap year";
    }
    }
};
int main ()
{
know ob1;
ob1.leap_year();
}
