#include<iostream>
using namespace std;
int sum(int a,int b);
int large (int a,int b);
void even_odd(int a,int b);
int main ()
{
int a;
int b;
cout<<"Enter The Value of A:";
cin>>a;
cout<<"Enter the value of B:";
cin>>b;
int s=sum(a,b);
int l=large(a,b);
cout<<"Sum of tow numbers:"<<s<<endl;
cout<<"Largest Number is:"<<l<<endl;
even_odd(a,b);
}
int sum(int a,int b)
{
    return a+b;
}
int large (int a,int b)
{
    if(a>b)
    {
        return a;}
        else
        {
            return b;
        }
    }
    void even_odd(int a,int b){
    if(a%2==0)
    {
    cout<<"A is even number"<<endl;}
    else{
    cout<<"Ais a odd number"<<endl;

    }
    if(b%2!=0){
        cout<<"B is a odd number";
    }
    else{
        cout<<"B is a even number";
    }
    }

