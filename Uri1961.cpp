#include<iostream>

using namespace std;
#include<bits/stdc++.h>
int main()
{
    int a,b,h,no,c1=0,i,n,ar[200],c,d,l,f=0;
    cin>>h>>no;
    for (i=0;i<no;i++)
    {
        cin>>n;
        ar[i]=n;
        c1+=1;


    }
    l=sizeof(ar);

    b=c1-1;
    for(i=0;i<c1;i++)
    {
        if(i==b)
                break;
        a=ar[i];
        c=ar[i+1];
        d=c-a;
        if(d<0)
            d*=-1;
        if (d>h)

        {
            cout<<"GAME OVER"<<endl;

        f=0;
        break;
        }
        else if (d<=h)
                f=1;
    }
    if (f==1)
    {
         cout<<"YOU WIN"<<endl;
    }
}
