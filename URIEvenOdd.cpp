#include<iostream>
using namespace std;
main()
{

     int i=0,even[100005],odd[100005],a,b=0,c,d,j=0,i1,j1,j2,j3,k,k1,t,s1,s2;
    cin>>a;
    while(b<a)
    {
        cin>>c;
        if(c%2==0)
        {
            even[i]=c;
            i++;
        }
        else

        {
            odd[j]=c;
            j++;
        }
        b++;
    }
    for(i1=0;i1<i;i1++)
    {
        s1=even[i1];
        for(j1=i1+1;j1<i;j1++)
        {
            if(s1>even[j1])
            {
                s1=even[j1];
                k=j1;
            }
        }
        t=even[i1];
        even[i1]=s1;
        even[k]=t;
    }

    for(j2=0;j2<j;j2++)
    {
        s2=odd[j2];
        for(j3=j2+1;j3<j;j3++)
        {
            if(s2<odd[j3])
            {
                s2=odd[j3];
                k1=j3;
            }
        }
        t=odd[j2];
        odd[j2]=s2;
        odd[k1]=t;
    }

    for(i1=0;i1<i;i1++)
    {
        cout<<even[i1]<<endl;
    }

     for(i1=0;i1<j;i1++)
    {
        cout<<odd[i1]<<endl;
    }
}
