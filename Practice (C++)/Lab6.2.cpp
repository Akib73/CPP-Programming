#include <iostream>
using namespace std;
class phone
{
private :
    string name;
    int *quantity;
public:


    phone (string n,int m)
    {
        name=n;
        quantity=new int;
        *quantity=m;
    }
    void show ()
    {

        cout<<"Phone Name:"<<name<<endl;
        cout<<"Quantity:"<<*quantity<<endl;

    }
    void setinfo(string n,int o)
    {
      name=n;
      *quantity=o;
    }

    phone (phone &d)
    {
        name=d.name;
        quantity=new int;
        *quantity=*(d.quantity);
    }


};
int main ()
{
    phone ob1("Nokia",50);
    ob1.show();
    phone ob2=ob1;
    cout<<"2nd object"<<endl;
    ob2.show();
    ob1.setinfo("Vivo",40);
    ob1.show();
      cout<<"2nd object"<<endl;
      ob2.show();


}
