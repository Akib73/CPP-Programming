#include<iostream>
using namespace std;
class First
{
private:
    int x;
public:
    void Set()
    {
        cout<<"Enter a Number:";
        cin>>x;

    }
    friend void Reverse(First d);


};
 void Reverse(First d)
 {
     int i;
     int p=d.x;
     cout<<"Revers numbers:";
     for (i=p; i>=0; i--)
     {
         cout<<i;
     }
 }
 int main ()
 {
     First ob1;
     ob1.Set();
     Reverse(ob1);
 }
