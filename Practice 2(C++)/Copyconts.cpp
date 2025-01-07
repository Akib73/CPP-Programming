#include<iostream>
using namespace std;
class info{
private:
string name;
int roll;
int cls;

public:
info(int a,int b)
{
roll=a;
cls=b;

}
info(info &s){
roll=s.roll;
cls=s.cls;
}
void show(){
cout<<"Roll:"<<roll<<endl;
cout<<"Class:"<<cls<<endl;

}
};
int main ()
{
info ob1(21,9);
info ob2(ob1);
cout<<"ob1 Information:"<<endl;;
ob1.show();
cout<<"Ob2 information:"<<endl;
ob2.show();
ob1(22,8);
ob2.show();
}
