#include <iostream>
using namespace std ;
class avg {
int a;
int b;
int c;
public :
    friend  void average (avg o);
    void show (){
        int  avg;
        avg =(a+b+c)/3;
        cout<<"The average of three:"<<avg;
    }


    };
    void average (avg o){
         int A,B,C;
         cout<<"Enter 1st number:";
         cin>>a;
         cout<<"Enter 2nd number:";
         cin>>b;
         cout<<"Enter 3rd number:";
         cin>>c;


     }


    int main ()
    {
        avg ob1;
        average(ob1);
        ob1.show();

    }
