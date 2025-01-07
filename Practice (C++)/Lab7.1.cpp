#include <iostream>
using namespace std;
class STUDENT
{
private:
    string n;
    string d;
    int i;
    string s;
    double k;

public:
    STUDENT( int id,string name,string dept,string section)
    {
        n=name;
        i=id;
        d=dept;
        s=section;
    }
    STUDENT( int id,string name,double CGPA)
    {
        n=name;
        i=id;
        k=CGPA;

    }
     STUDENT( int id,string name,string dept)
    {
        n=name;
        i=id;
        d=dept;

    }
    void display1stconstructorInfo()
    {
        cout<<"Student ID:"<<i<<endl;
        cout<<"Student Name:"<<n<<endl;
        cout<<"Student Department:"<<d<<endl;
        cout<<"Student Section:"<<s<<endl;

    }
     void display2ndconstructorInfo()
    {
        cout<<"Student ID:"<<i<<endl;
        cout<<"Student Name:"<<n<<endl;
        cout<<"Student Department:"<<d<<endl;

    }
     void display3rdconstructorInfo()
    {
        cout<<"Student ID:"<<i<<endl;
        cout<<"Student Name:"<<n<<endl;

        cout<<"Student CGPA:"<<k<<endl;

    }
};
int main ()
{
  string N;
  int I;
  string D;
  string S;
  double C;
  cout<<"Enter ID:";
  cin>>I;
  cout<<"Enter Name:";
  cin>>N;
  cout<<"Enter Department:";
  cin>>D;
  cout<<"Enter Section:";
  cin>>S;
  cout<<"Enter CGPA:";
  cin>>C;
  STUDENT ob1(I,N,D,S);
  cout<<"Display of 1 Constractor"<<endl;
  ob1.display1stconstructorInfo() ;
  STUDENT ob2(I,N,D);
  cout<<"Display of 2 Constractor"<<endl;
  ob2.display2ndconstructorInfo();
  STUDENT ob3(I,N,C);
  cout<<"Display of 3 Constractor"<<endl;
  ob3.display3rdconstructorInfo();
}
