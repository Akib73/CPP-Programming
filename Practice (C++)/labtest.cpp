#include <iostream>
using namespace std;
class Area
{
public :
     int length;
     int breadth;
     Area ()
     {
         length =5;
         breadth =2;

     }
     Area (int a ,int b)
     {
         length=a;
         breadth=b;
     }
     getLength()
     {
         cout<<"length"<<length<<endl;
         cout<<"breadth:"<<breadth<<endl;
     }
     int areaCalculation()
     {
         return length*breadth;
     }
     void displayArea(int temp)
     {
         cout<<"Area is="<<temp<<endl;
     }


};
int main ()
{
    Area ob1;
    cout<<"Default Constructor:"<<endl;
    ob1.getLength();
    int a1=ob1.areaCalculation();
    ob1. displayArea(a1);
    cout<<"Parameterlize Constructor"<<endl;
    Area ob2(2,2);
    ob2.getLength();
    int a2=ob2.areaCalculation();
    ob1. displayArea(a2);

}
