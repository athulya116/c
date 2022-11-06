#include<stdio.h>
void main()
{
int i,j,n,temp,arr[30];
printf(" enter the number of elements in array");
scanf("%d",&n);
printf("enter telements in array");
for(i=0;i<n;++i)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;++j)
    {
    if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    }
printf("the  elements in the array after sorting are \n");
for(i=0;i<n;i++)
printf("%d \t",arr[i]);
}



