#include<stdio.h>
int main()
{
    int a[5],b[5],c[10],i;
    printf("enter the elements of first array\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("enter the elements of second array\n");
    for(i=0;i<5;i++)
    scanf("%d",&b[i]);
    printf("the arrays before swapping are\n:");
    printf("the first array is :\n");
    for(i=0;i<5;i++)
    printf("%d\n",a[i]);
    printf("the second array is :\n");
    for(i=0;i<5;i++)
    printf("%d\n",b[i]);
    for(i=0;i<5;i++)
    {
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];
    }
    printf("the arrays after swapping are\n");
    printf("the firt array is:\n");
    for(i=0;i<5;i++)
    printf("%d\n",a[i]);
    printf("the second array is:\n");
    for(i=0;i<5;i++)
    printf("%d\n",b[i]);
    return 0;
}
