#include<stdio.h>
void sort(int n,int a[20])
{
int i,j,temp;
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("the elements after sorting");
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}}
void main()
{
 int i,j,n,temp,a[20];
 printf("enter the number of elements in array");
 scanf("%d",&n);
 printf("enter the elements of array");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("the elements before sorting are ");
 for(i=0;i<n;i++)
 {
 printf("%d\t",a[i]);
 }
 sort(n,a);
}
