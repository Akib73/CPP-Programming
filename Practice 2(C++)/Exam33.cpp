#include <iostream>
using namespace std;
class multi{
private:
int a,b,c;
public:
multi (int x,int y,int z){
a=x;
b=y;
c=z;

}
multi () {};
multi multiplication (multi m,multi n,multi p){
multi temp ;
temp.a=m.a*n.a*p.a;
temp.b=m.b*n.b*p.b;
temp.c=m.c * n.c * p.c;
return temp;}
 void show (){cout<<"Multiplication of a :"<<a<<endl;
cout<<"Multiplication of b:"<<b<<endl;
cout<<"Multiplication of c:"<<c;
}
};




int main ()
{
multi ob1(10,5,6),ob2(2,6,2),ob3(3,2,2),ob4,ob5;
ob5=ob4.multiplication(ob1,ob2,ob3);
ob5.show();
}
