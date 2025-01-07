#include<iostream>
using namespace std;
class arth
{
public:
    int sum (int a,int b)
    {
        return a+b;
    }
    int sub (int a, int b){
     return a-b;
     }
     int mult (int a, int b){
     return a*b;
     }
     float div(int a,int b){
     return a/(float)b;
     }
     };
     int main ()
     {
     int x,y;
     arth s1;
     cout<<"Enter the value of X:";
     cin>>x;
     cout<<"Enter the value of Y:";
     cin>>y;
     cout<<"Summation:"<<s1.sum(x,y)<<endl;
     cout<<"Subtraction:"<<s1.sub(x,y)<<endl;
     cout<<"Multiplication:"<<s1.mult(x,y)<<endl;
     cout<<"Division:"<<s1.div(x,y);
     return 0;
     }

