#include<stdio.h>

#include<conio.h>
int n,i,j,cost[10][10],ne=1,min,a,b,u,v,mincost=0;
   int visited[10]={0};
void main()

{
   int vi[n];
printf("enter the number of vertices");
scanf("%d",&n);
printf("enter  vertices");
for(i=0;i<n;i++)
scanf("%d",&vi[i]);
printf("enter the adjascentcy matrix");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{
    scanf("%d",&cost[i][j]);
    if(cost[i][j]==0)
    cost[i][j]=999;
}
visited[1]=1;
while(ne<n)
{
    for(i=1,min=999;i<=n;i++)
    for(j=1;j<=n;j++)
    
        if(cost[i][j]<min)
        if(visited[i]!=0)
        {
          min=cost[i][j];
          a=u=i;
          b=v=j;
        }
    if(visited[u]==0 || visited[v]==0)
    {
        printf("edge %d:(%d %d) cost:%d",ne++,vi[a-1],vi[b-1],min);
        mincost+=min;
        visited[b]=1;
    }
    
    cost[a][b]=cost[b][a]=999;
    
}
printf("the min cost is %d",mincost);


getch();

}