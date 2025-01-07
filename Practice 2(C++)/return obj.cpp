#include <iostream>
using namespace std;
class sum
{
private:
    int real;
    int image;
public:
    sum s (sum p,sum r)
    {
        sum l;

       l. real=p.real + r.real;
        l.image=p.image+r.image;
    return l;}

    void input ()
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
    sum t;
sum ob1,ob2,ob3;
ob1.input();
ob2.input();
t=ob3.s(ob1,ob2);
t.Display();
return 0;

}
