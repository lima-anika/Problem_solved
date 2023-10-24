#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    int a,b,c,d,e=0;
    cin>>a;
    for(c=0;c<5;c++)
    {
        cin>>d;
        if(d==a)
        {
            e++;
        }
    }
    cout<<e<<endl;
}
