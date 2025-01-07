#include <iostream>
using namespace std;
class Square {
public:
int side;
public :
Square (){
side=2;
}
Square (int s){

side =s;
}
int area ()
{
return side * side ;
}
};
int main ()
{
Square ob1,ob2(7);
int z=ob1.area();
cout<<"Area="<<z<<endl;
cout <<"Area="<<ob2.area();
}
