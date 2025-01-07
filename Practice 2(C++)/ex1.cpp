#include <iostream>
using namespace std;
class add
{
private:
    int a;
    int b;
public :
    add (int x,int y)
    {
        a=x;
        b=y;
    }
    add(){};
    void sum (add m,add n)
    {
    a=m.a +n.a;
    b=m.b+n.b;
    }
    void show (){
    cout<<"Sumission of a:"<<a<<endl;
    cout<<"Summision of b:"<<b;
    }

};
int main ()
{
add ob1(5,6),ob2(6,6),ob3;
ob3. sum(ob1,ob2);
ob3.show();
}

