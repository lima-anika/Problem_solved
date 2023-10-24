#include<stdio.h>
#include<conio.h>

int cost[4][4],i,n=4,ne=1,min=999,mincost=0,visited[4]={0},u,v,a,b,j;

main()


{
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        scanf("%d",&cost[i][j]);
        if(cost[i][j]==0)
        {
cost[i][j]=min;
        }
    }
}

visited[1]=1;

while(ne<n)
{

for(i=1,min=999;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        if(cost[i][j]<min)
        {
            if(visited[i]!=0)
            {


            min=cost[i][j];

            a=u=i;
            b=v=j;
            }
            if(!visited[u] && !visited[v])
            {
mincost = mincost + min;
visited[b]=1;
printf(" cost from a %d to b %d is %d edge is %d ", a,b,ne++);
            }
        }
        cost[a][b]=cost[b][a]=999;

    }
}

}
//printf(" Mincost %d ",mincost);



}
