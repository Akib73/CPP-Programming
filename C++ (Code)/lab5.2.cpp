#include <iostream >
using namespace std;
enum day {satarday=1,sunday=2,monday=3,tuesday=4,wednesday=5,thirsday=6,friday=7};
int main ()
{
int day;
cout<<"Enter Day:";
cin>>day;
if(day==friday){
cout<<"Off day";

}
else{
cout<<"working day";
}


return 0;}
