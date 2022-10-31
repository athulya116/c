#include<stdio.h>
int stack[100],choice,n,top,i,x,t;
void push();
void pop();
void display();
void main()
{
top=-1;
printf("\n Enter size of stack\n");
scanf("%d",&n);
printf("\n choose the operation ");
printf(" \n \t 1.push \t 2.pop \t 3.display \t exit" );
do
{
printf("\n enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
  case 1:
         {
          push();
          break;
         }
  case 2:
         {
          pop();
          break;
         }
  case 3:
         {
          display();
          break;
         }
  case 4:
         { 
          printf("\n exit \n");
          break;
         }
  default:
         {
          printf("\n enter valid option ");
         }
}
}
while(choice!=4);
}
void push()
{
if(top>=n-1)
{
printf("\n stack overflow\n ");
}
else
{
printf("enter a value to be pushed :");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top<=-1)
{
printf("stack underflow\n");
}
else
{
t=stack[top];
printf("\n the popped element is : %d ",t);
top--;
}
}
void display()
{
if(top>=0)
{
  printf("\n the array element are \n");
   for(i=top;i>=0;i--)
   {
    printf("%d \t ", stack[i]);
    
}}
else
{
printf("stack is empty");
}}

  
