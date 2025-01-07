#include <iostream>
 using namespace std;
 class temp
 {
  private:
  int count;
  public:
  temp():count(50){ }
  void operator +(int a)
  {

   count=count+10;
   }
void Display()
{
 cout<<"Count: "<<count;
 }

};
int main()
{
 temp t;
++t;
 t.Display();
 return 0;
 }

