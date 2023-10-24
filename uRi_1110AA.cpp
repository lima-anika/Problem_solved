#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main()

{
    int i,j,n,len;
    queue<int>q1;

    while(cin>>n)
    {
        if (n==0)
                break;
        for(i=0;i<n;i++)
        {
            q1.push(i+1);
        }

        len=q1.size();


        cout<<"Discarded cards: ";
        while(len>1)
        {
            cout<<q1.front();
            if (len>2)
            {
                 cout<<", ";
            }

            q1.pop();

            j=q1.front();
            q1.push(j);
            q1.pop();
            len-=1;

        }
        cout<<endl;
         cout<<"Remaining card: "<<q1.front()<<endl;
         q1=queue<int>();
    }

    return 0;
}
