#include<iostream>
using namespace std;
main()
{
    int n,f[2010]={0},m,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        f[m]++;
    }
    for(i=1;i<=2000;i++)
    {
        if(f[i]>0)
        {
            cout<<i<<" apparece "<<f[i]<<" vez (es)"<<endl;
        }
    }
}
