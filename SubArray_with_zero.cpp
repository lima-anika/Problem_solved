#include<iostream>
using namespace std;
main()
{
int i,s=0,a[]={3,4,-7,3,1,3,1,-4,-2,-2};


for(i=0;i<10;i++)
{
    if(a[i]>0)
    {
          s=a[i]+s;
    }

    cout<<a[i]<<endl;
    if(s==7 )
    {
        s=0;
        cout<<"Zero"<<endl;
    }
}
}
