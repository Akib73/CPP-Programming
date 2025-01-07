#include<iostream>
using namespace std ;
class publication
{
public :
    string t;
    int p;
    virtual void getdata()
    {
        cout<<"Enter title:";
        getline(cin,t);
        cout<<"Enter price:";
        cin>>p;
    }
    virtual void putdata ()
    {


        cout<<"Title:"<<t<<endl;
        cout<<"price"<<p<<endl;
    }
};
class book: public publication
{
public:
    int pa;
     void getdata()
    {
        cout<<"Enter  page count:";
       cin>>pa;
    }
      void putdata ()
    {


        cout<<"page count:"<<pa<<endl;

    }


};
class tape:public publication
{
    public:
    int time;

     void getdata()
    {
        cout<<"Enter  time (min):";
       cin>>time;
    }


   void putdata ()
    {


        cout<<"time:"<<time<<endl;

    }
};
int main ()
{
    publication ob4 ,*ob1;
    tape ob2;
    book ob3;
    ob4.getdata();
    ob4.putdata();
    ob1=&ob2;
    ob1->getdata();
    ob1->putdata();
    ob1=&ob3;
    ob1->getdata();
    ob1->putdata();
}
