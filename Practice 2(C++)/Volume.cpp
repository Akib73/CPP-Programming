#include<iostream>
using namespace std;
int main ()
{
int length;
int wight;
int hight;
int volume;
cout<<"Enter Length:";
cin>>length;
cout<<"Enter Wight:";
cin>>wight;
cout<<"Enter Hight:";
cin>>hight;
volume=length*wight*hight;
cout<<"Volume="<<length<<"X"<<wight<<"X"<<hight<<"="<<volume<<"m3";
return 0;
}
