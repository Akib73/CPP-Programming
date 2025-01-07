#include <iostream>
using namespace std;
class student
{
private :
    string name;
    int *id;
public:


    student ()
    {
        cout<<"Enter Name:";
        getline(cin,name);
         cout<<"Enter ID:";
        cin>>id;

    }
    void show ()
    {

        cout<<"Student Name:"<<name<<endl;
        cout<<"Student ID:"<<*id<<endl;

    }
    void setvalue(string j,int k)
    {
         name=j;
        id=new int;
        *id=k;
    }
    student (student &d){
        name=d.name;
        id=new int;
        *id=*(d.id);
    }
};
int main ()
{
   student ob1();
    ob1.show();

student ob2(ob1);
cout<<"2nd Object"<<endl;
 ob2.show();
 ob1.setvalue("Rakib",40);
 cout<<"Change 1st Object information:"<<endl;
 ob1.show();
 cout<<"After change 1st Object info 2nd Object"<<endl;
 ob2.show();
}
