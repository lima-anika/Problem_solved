#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long int fact(int n1)
{int n4=1;

while(1)
{
    n4=n4*n1;
    n1-=1;
    if(n1==1)
    {
        return n4;
    }
}

}
main()
{
    long long int i,n,n1,n2,n3,f=0;
    cin>>n;
    while(n--)
    {
        f=0;
        cin>>n1;
        if(n1==1)
        {
            continue;
        }
         else if(n1==2)
        {
             cout<<2<<"!"<<" "<<"="<<" "<<2<<endl;
            continue;
        }
        else
        {


        n2=sqrt(n1);
        for(i=0;i<=n2;i++)
        {
            if(n1%2==0)
            {
                f=1;
            }
        }
        if (f==0)
        {
            n3=fact(n1);
            cout<<n1<<"!"<<" "<<"="<<" "<<n3<<endl;
        }
        }

    }
}
