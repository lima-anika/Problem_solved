#include<iostream>
using namespace std;
main()
{
    int a,b,d=0,c=0,t1=0,t2=0,x;
    while(1)
    {
        c++;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>a>>b;
        if(a>b)
        {
         t1++;
        }
        if(a<b)
        {
            t2++;
        }
        if((a==0)&&(b==0))
        {
            d++;
        }
        cin>>x;
        if(x==1)
        {
            continue;
        }
        if(x==2)
        {
            break;
        }
    }
    cout<<c<<" grenais"<<endl;
    cout<<"Inter:"<<t1<<endl;
    cout<<"Gremio:"<<t2<<endl;
    cout<<"Empates:"<<d<<endl;
    if(t1>t2)
    {
        cout<<"Inter venceu mais"<<endl;
    }
    if(t1<t2)
    {
        cout<<"Gremio venceu mais"<<endl;
    }

}
