#include <iostream >
using namespace std;
class student
{
public :
    int roll;
    string name ;
   void read_info ()
    {
        cout<<"Enter student roll:";
        cin>>roll;
        cout<<"Enter student name :";
        cin>>name;
    }
   void display_info ()
    {
        cout <<"Student Roll"<<roll<<endl;
        cout<<"student name:"<<name<<endl;
    }



};
class Exam : virtual public student
{
public:
    int eng,math,ban;
    void read_marks ()
    {
        cout<<"Enter marks of English:";
        cin>>eng;
        cout<<"Enter marks of math :";
        cin>>math;
        cout<<"Enter marks of Bangla :";
        cin>>ban;
    }
     void display_marks ()
    {
        cout <<"Bangla"<<ban<<endl;
        cout<<"English:"<<eng<<endl;
        cout<<"Math:"<<math<<endl;
    }



};
class score :virtual public student,virtual public Exam
{
public:
    int score;
    void read_score ()
    {
        cout<<"Enter score:";
        cin>>score;
    }
     void display_score()
    {
        cout<<"Score:"<<score<<endl;
    }

};
class result:virtual  public student,virtual public Exam,public score
{
public:
    int total,average;
    void compute ()
    {
        total=eng+ban+math+score;
        average=total/4;
    }
     void display_res()
    {
        cout <<"Student Roll"<<roll<<endl;
        cout<<"student name:"<<name<<endl;
        cout<<"Marks"<<endl;
        cout <<"Bangla"<<ban<<endl;
        cout<<"English:"<<eng<<endl;
        cout<<"Math:"<<math<<endl;
        cout<<"Total:"<<total<<endl;
        cout<<"Average:"<<average<<endl;
        cout<<"Score:"<<score<<endl;

    }
};
int main ()
{
    result ob1;
    ob1.read_info ();
    ob1.display_info ();
    ob1.read_marks ();
    ob1.display_marks ();
    ob1.read_score ();
    ob1.display_score();
    ob1.compute ();
    ob1.display_res();


}


