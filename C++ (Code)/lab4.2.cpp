#include <iostream>
using namespace std;
class Known
{
public:
    string name;
public:
    Known ()
    {
        name="Unknown";
    }
    Known(string s)
    {
        name=s;
    }
    string get_name()
    {
        return name;
    }
};
int main ()
{
    Known ob1,ob2("Akib");
    cout<<"Name:"<<ob1.get_name();
    cout<<endl;
    cout<<"Name:"<<ob2.get_name();
    return 0;
}
