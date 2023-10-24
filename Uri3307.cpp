#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c;
    int n,n1;
    cin>>n;
    while(n--)
    {
        cin>>a;
        b=a;
        a=a/(4*3.14);
        a=sqrt(a);
        if (a<12)
        {
                b=b*.09;
                cout<<"vermelho = R$ "<<fixed << setprecision(2)<<b<<endl;}
        else if(a>15)
        {
             b=b*.05;
                cout<<"amarelo = R$ "<<fixed << setprecision(2)<<b<<endl;
        }
        else
        {
            b=b*.07;
                cout<<"azul = R$ "<<fixed << setprecision(2)<<b<<endl;
        }
    }
    return 0;
}
