#include <iostream>
using namespace std ;
class avg {
int a;
int b;
int c;
public :
    friend  void average (avg o);
     void  input (){

         cout<<"Enter 1st numnber:";
         cin>>a;

         cout<<"Enter 2nd numnber:";
         cin>>b;

         cout<<"Enter 3rd numnber:";
         cin>>c;

     }



    };
    void average (avg o){
         int avg;
         avg=(o.a+o.b+o.c)/3;
         cout<<"Avarage of 3 value is:"<<avg;

     }

    int main ()
    {
        avg ob1;
        ob1.input();
        average(ob1);
    }

