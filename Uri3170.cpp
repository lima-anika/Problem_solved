#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b;
    c=b%2;


        b=b/2;
        a=a-b;
        if(a==0)
        {
            printf("Amelia tem todas bolinhas!\n");
        }
        else if(a<0)
        {
            a=a*(-1);
            printf("Faltam %d bolinha(s)\n",a);
        }


        else
            printf("Faltam %d bolinha(s)\n",a);



    return 0;
}
