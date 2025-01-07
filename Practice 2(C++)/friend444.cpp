#include <iostream>
using namespace std;

class m1{
int a=10;


};

class m2{
int b=20;



};
 class m3{
int c=30;
public:
friend void avarage(m1 ob1,m2 ob3,m3 ob4);

 };

 void avarage(m1 ob1,m2 ob3,m3 ob4)
{
int sum;
sum=ob1.a+ob4.c+ob3.b;
cout<<"Avarage="<<sum/3;
}

int main ()
{
m1 j1;
m2 j2;
m3 j3;
avarage(j1,j2,j3);

}
