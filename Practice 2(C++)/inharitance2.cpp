#include<iostream>
using namespace std;
class Alpha
{
    public:
        int x;
    Alpha(int i)
    {

        x=i;
        cout<<"x intiliging"<<endl;


    }
    void show1()
    {
        cout<<"X="<<x<<endl;
    }
};
class Beta
{
public:
      int y;
    Beta(int j)
    {

        y=j;
        cout<<"Y Intilizing"<<endl;
    }
    void show2()
    {
        cout<<"Y="<<y<<endl;
    }
};
class  gama: public Alpha,public Beta
{
public:
       int m,n;
    gama (int a,int b,int c,int d):
    Alpha(a),Beta(b)
    {

        m=c;
        n=d;

    }
    void show()
    {
       show1();
      show2();
      cout<<"A="<<m<<endl;
        cout<<"B="<<n<<endl;
    }
};
int main ()
{
    gama ob1(1,2,3,4);

    ob1.show();
}
