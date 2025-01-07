#include<iostream>
using namespace std;
class marks
{
private:
    int roll;
    string name;
    double bangla;
    double english;
    double math;
    double ict;

public:
    void input()
    {
        cout<<"Enter Roll:";
        cin>>roll;
        cout<<"Enter Name:";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter Marks:"<<endl;
        cout<<"Bangla:";
        cin>>bangla;
        cout<<"English:";
        cin>>english;
        cout<<"Math:";
        cin>>math;
        cout<<"ICT:";
        cin>>ict;
    }

    void output (){
    cout<<"Student Name:"<<name<<endl;
    cout<<"Student Roll:"<<roll<<endl;
    cout<<"Result:"<<endl;
    cout<<"Subject\t-"<<"\t";
    cout<<"Mark:"<<endl;
    cout<<"Bangla\t"<<"-\t"<<bangla<<endl;
    cout<<"English\t"<<"-\t"<<english<<endl;
    cout<<"Math\t"<<"-\t"<<math<<endl;
    cout<<"ICT\t"<<"-\t"<<ict<<endl;
   double t;
   t=bangla+english+math+ict;
   cout<<"Total Marks:\t"<<t;
    }
};
int main ()
{
marks s1;
s1.input();
s1.output();

}
