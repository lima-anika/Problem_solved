#include<iostream>

using namespace std;

int main()
{
    int n,i,j,x,y,z;
    cin>>n;
    while(n--)
    {
        cin>>x>>y>>z;
        if ((200<=x)and (x<=300))
        {
            if (y>=50)
            {
                 if(z>=150)
                 {
                     cout<<"Sim"<<endl;
                 }
                 else
                    cout<<"Nao"<<endl;
            }
            else
            cout<<"Nao"<<endl;

        }
        else
        {
            cout<<"Nao"<<endl;
        }



    }
}
