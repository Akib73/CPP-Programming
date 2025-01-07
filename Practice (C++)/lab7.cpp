#include <iostream>
using namespace std;
class MYPROBLEM
{
private :
    int c[10];

public:
    showArrySummation(int a[],int length)
    {
        int i;
        int sum=0;
        int j=1;
        cout<<"Enter Arry Element number:";
        cin>>length;
        for(i=0; i<length; i++)
        {
            cout<<"Enter "<< j+i<<" Number Arry element:";
            cin>>a[i];

            sum=sum+a[i];

        }
        cout<<"Summision of Arry Elemnts is:"<<sum;
        cout<<endl;
    }
    showArraySummation(int a)
    {
        int s=1;
        cout<<"Calculate Factorial\n";
        cout<<"Enter number:";
        cin>>a;
        int i;
        for(i=1; i<=a; i++)
        {
            s=s*i;

        }
        cout<<"Factorial of "<<a<<" is="<<s;
    }

};
int main ()
{
    MYPROBLEM ob1;
    int d[10];
    int n;
    int k;
    ob1. showArrySummation(d,n);
    ob1. showArraySummation(k);
}
