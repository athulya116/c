#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top,*temp;
void push()
{
  int item;
  struct node *newnode;
  newnode=(struct node *)malloc(sizeof(struct node));
  printf("enter item");
  scanf("%d",&item);
  if(top==NULL)
  {
    newnode->data=item;
    newnode->next=NULL;
    top=newnode;
  }
  else
  {
    newnode->data=item;
    newnode->next=top;
    top=newnode;
  }
}
void pop()
{ 
  temp=top;
  if(top==NULL)
  {
    printf("stack underflow");
  }
  else{
     top=top->next;
     free(temp);
  }
}
void display()
{
  temp=top;
  if(top==NULL)
  {
    printf("stack empty");
  }
  else{
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
  }
}
void main()
{   int choice;
    printf ("the stack operations are\n");
    printf(" 1.push  2.pop   3.display  4.exit");
    do
    {
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            break;
            default:printf("enter a valid option");
        }
    }
    while(choice!=4);
}