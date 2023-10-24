#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main()
{
    double a,b,s=0,k=0,x;
    while(1)
    {
        cin>>a;
        if(a>=0&&a<=10)
        {
            s=a+s;
            k++;
        }
        else
        {
            cout<<"nota invalida"<<endl;
        }
        if(k==2)
        {
            cout<<fixed<<setprecision(2)<<"media = "<<s/2.0<<endl;
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            k=0;
            s=0;

            while(1)
            {
                cin>>x;
                if((x<1) || (x>2))
                {
                     cout<<"novo calculo (1-sim 2-nao)"<<endl;
                }
                else
                {
                    break;
                }
            }
        }
        if(x==2)
        {
            break;
        }
        else
        {
            continue;
        }

    }
}
