#include<iostream>
using namespace std;
class Arith{
public:
void sum(int a, int b){
cout<<"sum:"<<a+b<<endl;
}
void sub(int a, int b){
cout<<"sub:"<<a-b<<endl;
}
void mult(int a,int b){
cout<<"Multiplication:"<<a*b<<endl;
}
void div(int a,int b) {
cout<<"Div:"<<a/(float)b<<endl;
}
};
int main (){
    int a;
    int b;
Arith s1;
s1.sum(5,10);
s1.sub(10,5);
s1.mult(10,5);
s1.div(10,3);
return 0;}
