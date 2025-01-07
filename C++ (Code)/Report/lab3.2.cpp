/**Write a C++ program  that  calculate summation ,multiplication and subtraction of
two integer by using 4 type of user define function and using class**/
#include<iostream>
using namespace std ;
class function{
public:
int input_a()
{
    int a;
    int b;
    cout<<"Enter the value of A:";
    cin>>a;
    return a;
}
int input_b()
{
    int b;
    cout<<"Enter the value of B :";
    cin>>b;
    return b;
}
void sum ()
{
    cout<<"Sum of A and B is: ";
}
void sub(int i,int j)
{
    cout<<"Subtraction of A and B is:"<<i-j<<endl;
}
int mul(int m,int n)
{

    return m*n;
}
};
int main ()
{
function ob1;
int A=ob1.input_a();
int B=ob1.input_b();
ob1.sum();
cout<<A+B<<endl;
ob1.sub(A,B);
int Z=ob1.mul(A,B);
cout<<"Multiplication of A and B is:"<<Z;
}
