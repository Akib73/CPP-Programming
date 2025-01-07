#include<iostream>
using namespace std;
void password ()
{
    string uname;
    cout<<"Enter User Name:";
    cin>>uname;
 char pass[20];
 cout<<"Enter Password:";
 cin>>pass;
int i=0;
int k=0;
int l=0;
int m=0;
int n=0;
int s=0;


try{
    while (pass[i]!='\0')
    {


         if(pass[i]>='a'&& pass[i]<='z')
        {
             l++;
        }
      else   if(pass[i]>='A'&& pass[i]<='Z')
        {
             m++;
        }
        else if(pass[i]>='0' && pass[i]<='9')
        {
            n++;

        }
        else
        {
            s++;
        }
        i++;
        k++;
    }
       if(k<8 || l==0 || m==0 || n==0 || s==0)
       {


       throw 2;
       }
       else
       {
           cout<<"This Password is accepted";
       }






    }


catch (int a)
{


if (k<8)
{

    cout<<" password must be at least 8 characters"<<endl;
}
if(l==0)
{
    cout<<"Password must be at least 1 lowercase characters"<<endl;
}
if(m==0)
{
    cout<<"Password must be at least 1 uppercase characters"<<endl;
}
if(n==0)
{
    cout<<"Password must be at least 1 Digit"<<endl;
}
if(s==0)
{
    cout<<"Password must be at least 1 special characters"<<endl;
}
cout<<"Please Try again later.....";
getchar();
cin.ignore();
password();


}
}
int main ()
{
    password();
}
