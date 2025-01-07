//** Problrm Name :Write a porogram to find area and Perimeter of a reactangle (usnig Hierarchical Inheritance )\**
#include<iostream>
using namespace std;

class Rectangle
{
    protected:
       float length, breadth;
    public:
        void Set()
        {
            cout<<"Enter length: ";
            cin>>length;
            cout<<"Enter breadth: ";
            cin>>breadth;
        }
};
class Area : public Rectangle
{
    public:
       float calc()
         {
             return length*breadth;
         }
};
class Perimeter : public Rectangle
{
    public:
       float calc()
         {
            return 2*(length+breadth);
         }
};
int main()
{
 cout<<"Enter first rectangle to find area.\n";

  Area a;
  a.Set();
   cout<<"Area = "<<a.calc()<<"square meter"<<endl;
   cout<<"Enter second rectangle to find perimeter"<<endl;

Perimeter p;
 p.Set();
   cout<<"\nPerimeter = "<<p.calc()<<" meter";

 return 0;
}



