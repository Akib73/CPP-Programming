#include <iostream>
using namespace std;
//no argument no return type;
void sum (){
    int a,b;
cin>>a>>b;
cout<<a+b;
};
//no argument but return type
int sub (){
    int a,b;
cin>>a>>b;
int s;
s=a-b;
return s;};
//argument with return type
int mult (int a ,int b)
{


return a*b;};
//argumnt but no return type
void division (int a,int b){
    cin>>a>>b;
    double m=a/(double)b;
    cout<<m;

};
int main ()
{
    int x;
sum();
x=sub();
cout<<x;
int a,b;
int c,d;
int n=mult(c,d);
cout <<n;
division(a,b);
return 0;
}
