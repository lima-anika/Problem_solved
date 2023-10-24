#include<iostream>
using namespace std;
main()
{
    int i,j,n,k,l;

    while(cin>>n)
    {

    for(i=1,l=0;l<n;i=i*2,l++)
    {
        for(j=i,k=0;k<n;j=j*2,k++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
}
