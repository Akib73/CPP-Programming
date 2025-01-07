#include<iostream>
using namespace std;
class interchange
{
private:
    double a;
    double b;
public:
    void input()
    {
        cout<<"Enter the value of A:";
        cin>>a;
        cout<<"Enter the value of B:";
        cin>>b;
    }

void swap()
{
    double temp;
    cout<<"Before interchange value "<<endl;
    cout<<"A="<<a<<endl;
    cout<<"B="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After interchange value"<<endl;
    cout<<"A="<<a<<endl;
    cout<<"B="<<b;
}
};
int main ()
{
interchange s1;
s1.input();
s1.swap();
return 0;
}
