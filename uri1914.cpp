#include<iostream>
using namespace std;
main()
{
    int n,m,n1;
    cin>>n;
    string str[4];
    while(n--)
    {
        cin>>str[0]>>str[1]>>str[2]>>str[3];
        cin>>m>>n1;
        if ((m+n1)%2==0)
        {
            if (str[1]=="PAR")
            cout<<str[0]<<endl;
            else
            cout<<str[2]<<endl;
        }
        else
        {
             if (str[1]=="IMPAR")
                cout<<str[0]<<endl;
            else
                cout<<str[2]<<endl;
        }

    }
}
