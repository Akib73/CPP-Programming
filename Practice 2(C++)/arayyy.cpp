#include<iostrem>
using namespace std;
class sum{
private:
int a,b;
public:
 void add(){
 cout<<"Enter number:";
 cin>>a;
 cout<<"Enter number:";
 cin>>b;
 }

 void show(){
 cout<<"Sumition:"<<a+b;
 }
 };
 int main ()
 {
 sum member[3];
 int i;
 for(i=1;i<=3;i++){
 member[i].add();
 member.show();
 }


