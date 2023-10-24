#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
main()
{
    char x[1111];
    int n,i;
    cin>>n;

    for(i=0;i<n;i++)
    {
cin>>x;
    while(a!=0)
    {
        r=a%10;

        if(r==1)
        {
            s=s+2;
        }
        if(r==2)
        {
            s=s+5;
        }
        if(r==3)
        {
            s=s+5;
        }
        if(r==4)
        {
            s=s+4;
        }
        if(r==5)
        {
            s=s+5;
        }
        if(r==6)
        {
            s=s+6;
        }
        if(r==7)
        {
            s=s+3;
        }
        if(r==8)
        {
            s=s+7;
        }
        if(r==9)
        {
            s=s+6;
        }
        if(r==0)
        {
            s=s+6;
        }
        a=a/10;
    }
    cout<<s<<" leds"<<endl;
    s=0;
    }
}


