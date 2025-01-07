#include<iostream>
using namespace std;
class mult{
int a ;
int b;
int c;
public :
    mult(){}
mult multiplication(mult M, mult N,mult O){
    mult temp;
   temp.a= M.a * N.a*O.a;
    temp.b= M.b * N.b *O.b;
   temp.c=M.c * N.c *O.c;

return temp;}
mult (int x,int y,int z) {
    a=x;
    b=y;
    c=z;
}
void show ()
{
    cout<<"Multiplication of Three object a:"<<a<<endl;
    cout<<"Multiplication of Three object b:"<<b<<endl;
    cout<<"Multiplication of Three object c:"<<c<<endl;

}
};
int main ()
{

    mult ob1(2,3,4),ob2(5,6,7),ob3(8,9,10),ob4,ob5;
    ob5= ob4 .multiplication(ob1,ob2,ob3);
    ob5.show();
}
