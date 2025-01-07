#include<iostream>
using namespace std;
class convert
{
private:
    double f;
    double c;
public:
    void fahrenheit()
    {
        double m;
        cout<<"Enter Celsius Value:";
        cin>>c;
        m=(9*c/5)+32;
        cout<<"Fahrenheit Value is:"<<m<<endl;
        }
        void celsius ()
        {
        double n;
        cout<<"Enter Farhenheit:";
        cin>>f;
        n=(5*f-160)/(double)9;
        cout<<"Celsius:"<<n<<endl;

    }

};
int main ()
{
convert c1,c2;
c1.fahrenheit();
c2.celsius();
return 0;
}
