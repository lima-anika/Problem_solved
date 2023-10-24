#include<iostream>
using namespace std;
main()
{
    int n,a,k=0,i=0,b[10600],f=0;
    cin>>n;
    int n1=n;
    while(n--)
    {
        cin>>b[i];
        i++;

    }

    for(i=0;i<(n1-1);i++)
    {
        if(b[i]>b[i+1])
        {
            k=i+1;
            f=1;
            break;
        }
    }
    if(f==1)
    {


cout<<k+1<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }


}
