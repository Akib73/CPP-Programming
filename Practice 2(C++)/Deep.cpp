#include <iostream>
using namespace std;
class info{
int a,*p;
public:
info (){};
info(int x,int y){
a=x;

p=new int;
*p=y;

}
void update()
{
a=a+1;
*p=*p+1;
}

void show()
{
 cout<<"A="<<a<<endl;
 cout<<"B="<<*p<<endl;

}

};
int main ()
{
info ob1(5,4);
info ob2(ob1);
ob1.show();

ob2.show();
ob1.update();
ob2.show();

}

