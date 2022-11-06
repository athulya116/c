#include<stdio.h>
int main()
{
    int a[50],n,s,i;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array elements ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the element to be search:\n");
    scanf("%d",&s);
    i=0;
    do
    {
      i++ ;
    } 
    while ((i<n)&&(a[i]!=s));
       if(a[i]==s)
       {
        printf("%d  found in %d th position ",s,i+1);
       }
       else
       {
         printf("%d not found",s);
       }}
    

        