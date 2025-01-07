#include<iostream>
using namespace std;
class know
{
public:
    int a;
public:
    void  even_odd()
    {
    cout <<"Enter Number:";
    cin >>a;
    if(a%2==0)
    {
    cout<<"It is a even number";
    }
    else
    {
    cout<<"It is a odd number";
    }
    }
};
int main ()
{
know ob1;
ob1.even_odd();
}
