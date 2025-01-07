/**Write a C++ program  that  calculate summation ,multiplication and subtraction of
two integer by using 4 type of user define function **/
#include <iostream>
using namespace std;
int input_a();//No arguments passed but a return value.
int input_b();
void sum ();//No arguments passed and no return value.
void sub(int i,int j);// Arguments passed but no return value.
int mul(int m,int n);// Arguments passed and a return value.

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
int main ()
{


    int x = input_a();
    int y =input_b();
    sum ();
    cout<<x+y<<endl;
    sub(x,y);
    int z=mul(x,y);
    cout<<"Multiplication of A and B is:"<<z;
}
