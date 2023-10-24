#include<bits/stdc++.h>
using namespace std;

int t,n,v,a,i,j,graph[49][49],from,to;
bool visited[49];
int count=0;

int foo(int vertex, int v) {
    int i, coun = 0;

    visited[vertex] = true;

    for (i = 0; i < v; i++) {
        if (graph[vertex][i] && !visited[i]) {
            coun = coun +foo(i,v)+ 1;


        }
    }

    return coun;
}

main()
{
    cin>>t;

    while (t--)
    {
        cin>>n;
        cin>>v>>a;

        for(i=0;i<v;i++)
        {
            for(j=0;j<v;j++)
            {
                graph[i][j]=0;
            }

            visited[i]=false;
        }

        for (i=0;i<a;i++)
        {
          cin>>from>>to;
          graph[from][to]=1;
          graph[to][from]=1;
        }

        int y=foo(n,v);

        cout<<y*2<<endl;
    }
}
