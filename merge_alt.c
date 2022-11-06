#include<stdio.h>
#define N 5
#define M (N*2)
int main()
{
    int a[N],b[N],c[M],i,k;
    printf("enter %d elements of first array",N);
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    printf("enter %d elements of second array",N);
    for(i=0;i<N;i++)
        scanf("%d",&b[i]);
    printf("merging both arrays into a new array in alternative positions");
    for(i=0,k=0;i<N;i++,k+=2)
    c[k]=a[i];
    for(i=0,k=1;i<N;i++,k+=2)
    c[k]=b[i];
    printf(" new array elements are:\n ");
    for(i=0;i<M;i++)
    printf("%d\n",c[i]);
    return 0;
}
 