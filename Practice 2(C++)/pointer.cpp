#include<iostream>
using namespace std;
class info{
private:
string name;
int roll;
int cls;
int *id;
public:
info(int a,int b,int p)
{
roll=a;
cls=b;
id=p;

}
info(info &s){
roll=s.roll;
cls=s.cls;
*id=*(s.id);
}
void show(){
cout<<"Roll:"<<roll<<endl;
cout<<"Class:"<<cls<<endl;
cout<<"ID:"<<*id<<endl;

}
};
int main ()
{
info ob1(21,9,7);
info ob2(ob1);
cout<<"ob1 Information:"<<endl;;
ob1.show();
cout<<"Ob2 information:"<<endl;
ob2.show();
}
