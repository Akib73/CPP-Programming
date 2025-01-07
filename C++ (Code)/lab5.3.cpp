#include <iostream>
using namespace std ;
class avg {
int a;
int b;
int c;
public :
    friend  void average (avg o);
    friend void show (avg m1);


    };
    void average (avg o){
         int A,B,C;
         cout<<"Enter 1st number:";
         cin>>A;
         cout<<"Enter 2nd number:";
         cin>>B;
         cout<<"Enter 3rd number:";
         cin>>C;
         o.a=A;
         o.b=B;
         o.c=C;

     }
     void show (avg m1){
        int d=(m1.a+m1.b+m1.c)/2;
        cout<<"Average of three number is:"<<d;
    }
    int main ()
    {
        avg ob1;
        average(ob1);
        show (ob1);

    }
