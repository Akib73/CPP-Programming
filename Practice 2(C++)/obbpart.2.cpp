#include <iostream>
using namespace std;
class sum
{
private:
    int real;
    int image;
public:
    void s (sum p,sum r)
    {
        real=p.real + r.real;
        image=p.image+r.image;
    }
    input ()
    {
        int a,b;
        cout<<"Enter Real number:";
        cin>>a;
        cout<<"Enter imaginary number:";
        cin>>b;
        real=a;
        image=b;
    }
    void Display(){
    cout<<"Total Real Number :"<<real<<endl;
    cout<<"Total Imageinary:"<<image;

    }
};
int main ()
{
sum ob1,ob2,ob3;
ob1.input();
ob2.input();
ob3.s(ob1,ob2);
ob2.Display();
return 0;

}
