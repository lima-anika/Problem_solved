
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l;
    char s[50];
    char s1[50];
    bool flag1,flag2;
    cin>>n;
    while(n--)
    {
        cin>>l;
        cin>>s;
        flag2=false;
        flag1=true;

        for (i=1;i<l;i++)
        {
            cin>>s1;
            flag1=false;

            if (strcmp(s,s1)!=0)
            {
                flag1=false;
                flag2=true;


            }
            else
                flag1=true;


        }
        if ((flag1==true) && (flag2==false))

             cout<<s<<endl;
        else


             cout<<"ingles"<<endl;
    }
    return 0;
}
