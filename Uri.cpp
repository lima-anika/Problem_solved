
#include<iostream>
using namespace std;
main()
{
    int s1,s2,i=2,j,n1,d1,m=1,n2,d2,f=0,k,n3,d3;
    char ch;
    cin>>ch;
    cin>>n1>>d1>>n2>>d2;
    s1=d1;s2=d2;
    switch(ch)
    {
        case '+':
            {
    for(i=2;i<15;i++)
    {
        if((d1%i==0)&&(d2%i==0))
        {
            m=m*i;
            d1=d1/i;
            d2=d2/i;
            i=1;
        }
    }
    //cout<<m<<endl;
    m=m*d1*d2;
    //cout<<m<<endl;
    d1=(m/s1);
    cout<<endl<<d1;
    d2=(m/s2);
    cout<<endl<<d2<<endl;
    d2=(d1*n1)+(d2*n2);
    cout<<d2<<"/"<<m<<endl;
    for(j=2;j<15;j++)
    {
        if((d2%j==0)&&(m%j==0))
        {
            m=m/j;
            d2=d2/j;
            j=1;
        }
    }
    cout<<d2<<"/"<<m;
    break;
    }

     case '-':
         {
    for(i=2;i<15;i++)
    {
        if((d1%i==0)&&(d2%i==0))
        {
            m=m*i;
            d1=d1/i;
            d2=d2/i;
            i=1;
        }
    }
    //cout<<m<<endl;
    m=m*d1*d2;
    //cout<<m<<endl;
    d1=(m/s1);
    cout<<endl<<d1;
    d2=(m/s2);
    cout<<endl<<d2<<endl;
    d2=(d1*n1)-(d2*n2);
    cout<<d2<<"/"<<m<<endl;
    for(j=2;j<15;j++)
    {
        if((d2%j==0)&&(m%j==0))
        {
            m=m/j;
            d2=d2/j;
            j=1;
        }
    }
    cout<<d2<<"/"<<m;
    break;
    }

     case '*':
         {
             cout<<n1<<endl<<n2<<endl<<d1<<endl<<d2<<endl;
    n3=(n1*n2); d3=(d1*d2);
    cout<<d3<<endl;
    cout<<n3<<endl;
    for(k=2;k<15;k++)
    {
        if((d3%k==0)&&(n3%k==0))
        {
            d3=d3/k;
            n3=n3/k;
            k=1;
        }
    }
    cout<<n3<<"/"<<d3<<endl;
    break;
    }

     case '/':
         {
n3=(n1*d2);d3=(d1*n2);
    for(j=2;j<18;j++)
    {
        if((n3%j==0)&&(d3%j==0))
        {
            n3=n3/j;
            d3=d3/j;
            j=1;
        }
    }
    cout<<n3<<"/"<<d3<<endl;
    break;
    }
}
}
