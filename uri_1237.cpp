#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    int n=0,i,j,k=0,m,l2=0,l1;
    getline(cin,str1);
    while(getline(cin,str2))
    {

        for(i=0;i<str1.length();i++)
        {
            for(j=0;j<str2.length();j++)
            {

                if (str1[i]==str2[j])
                {
                    l2=0;
                    for(m=i,n=j;m<str1.length(),n<str2.length();m++,n++)
                    {
                        if (str1[m]!=str2[n])
                            break;
                            l2++;
                    }
                    if(l2>k)
                        k=l2;

                }
            }
        }
        cout<<k<<endl;
        getline(cin,str1);

    }
    return 0;
}
