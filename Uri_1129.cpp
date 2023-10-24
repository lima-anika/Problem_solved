#include<iostream>

using namespace std;

main()
{
    int n,a,b,c,d,e,i;
    while(cin>>n && n!=0)
    {
        for(i=0;i<n;i++)
        {


        int c1=0;
        cin>>a;
        if (a<=127)
        {
            c1+=1;
            a=1;
        }

        cin>>b;
        if (b<=127)
        {
            c1+=1;
        b=1;
        }
        cin>>c;
        if (c<=127)
        {
            c1+=1;
            c=1;
        }
        cin>>d;
        if (d<=127)
        {
            c1+=1;
            d=1;
        }
        cin>>e;
        if (e<=127)
        {
            c1+=1;
            e=1;
        }

        if (c1==1)
        {
            if (a==1){cout<<"A"<<endl;}
            if (b==1){cout<<"B"<<endl;}
            if (c==1){cout<<"C"<<endl;}
            if (d==1){cout<<"D"<<endl;}
            if (e==1){cout<<"E"<<endl;}
        }
        else
            cout<<"*"<<endl;
        }
    }
    return 0;
}
