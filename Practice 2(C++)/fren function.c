#include <iostream>
using namespace std;
class m1{
int a=10;
public:
friend void avarage(m1 ob1,m2 ob3,m3 ob4);
};
class m2{
int b=20;
public:
friend void avarage(m1 ob1,m2 ob3,m3 ob4);

};
class m3{
int c=30;
public:
friend void avarage(m1 ob1,m2 ob3,m3 ob4);

};

friend void avarage(m1 ob1,m2 ob3,m3 ob4)
{
int sum;
sum=ob1.a+ob2.b+ob3.c;
cout<<"Avarage="<<sum/3;
}

};
int main ()
{

}
