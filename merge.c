#include<stdio.h>
#include<conio.h>
int main()
{
    int a[50],b[50],m,n,i,k,merge[100];
    printf("enter the size of first array");
    scanf("%d",&m);
    printf("enter the elements of first array");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
        merge[i]=a[i];
    }
    k=i;
    printf("enter the size of second array");
    scanf("%d",&n);
    printf("enter the elements in second array");
    for(i=0;i<n;i++)
    {
    scanf("%d",&b[i]);
    merge[k]=b[i];
    k++;
    }
    printf("the new array after merging is\t");
    for(i=0;i<k;i++)
    {
        printf("%d\t",merge[i]);
    }
    getch();
    return 0;
}
