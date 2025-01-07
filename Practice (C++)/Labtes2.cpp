#include <iostream>
using namespace std;
class EvenOddfinder
{
   public:
       int n;
        EvenOddfinder(int j)
        {
            n=j;
        }
         void Oddfinder()
         {
             int i;
             cout<<"Odd numbers is:";
             for(i=1; i<=n; i++)
             {
                 if(i%2==1)
                 {
                     cout<<i<<" ";
                 }
             }

         }
         void Evenfinder ()
         {
             int i;
             cout<<"\nEven Number is:";
             for(i=1; i<=n; i++)
             {
                 if(i%2==0)
                 {
                     cout<<i<<" ";
                 }
             }
         }
         EvenOddfinder( EvenOddfinder &ob)
{

}



};
int main ()
{
   EvenOddfinder ob1(10);
   cout<<"1st Object"<<endl;
   ob1.Oddfinder();

   EvenOddfinder ob2=ob1;
   cout<<"\n2nd Object"<<endl;
   ob2.Evenfinder();

}
