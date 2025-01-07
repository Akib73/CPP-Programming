#include <iostream>
#include <string.h>
int main ()
{
    char n[100];
    std::cin.get(n,100);
    int size=strlen(n);
    int i;
    int flag=0;
    char search;
    std::cout<<"Search:";
    std::cin>>search;
    for(i=i; i<size; i++)
    {
        if (search==n[i])
        {
            flag=1;
            break;
        }


    }
    if(flag==0){
    std:: cout<<"Not Found!";
    }
    else{
    std::cout<<search<<"is found and its position is "<<i;
    }
    return 0;}

