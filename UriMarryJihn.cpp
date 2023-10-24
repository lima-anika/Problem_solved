#include<iostream>
using namespace std;
main()
{
    int n,x,i,mary=0,john=0;
    cin>>n;
    while(n!=0)
    {
        mary=0;
        john=0;
        for(i=0;i<n;i++)
        {


        cin>>x;
        if(x==0)
        {
            mary++;
        }
        else
        {
            john++;
        }

        }

        cout<<"Mary won "<<mary<<" times and John won "<<john<<" times"<<endl;



cin>>n;


    }
}
