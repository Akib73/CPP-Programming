#include <iostream>
using namespace std;
class volume{
public:
int l;
int w;
int h;
public:
void input(){
cout<<"Enter length:";
cin>>l;
cout<<"Enter Widht:";
cin>>w;
cout<<"Enter hight:";
cin>>h;
}
void output(){
cout<<"Volume is "<<l*w*h;
}
};
int main()
{
volume ob1,ob2,ob3;
ob1.input();
ob1.output();
ob2.input();
ob2.output();
ob3.input();
ob3.output();
return 0;
}
