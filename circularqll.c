#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *temp,*front,*rear;
void enq()
{   int item;
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter item to insert");
    scanf("%d",&newnode->data);
    if(front==NULL)
    {
        front=newnode;
        rear=newnode;
        newnode->next=front;
    }
    else
    {
        rear->next=newnode;
        newnode->next=front;
        rear=newnode;
    }
}
void deq()
{
  temp=front;
  if(front==NULL)
  {
    printf("q empty");
  }
  else 
  {
    if(front==rear)
    {
        front =rear=NULL;
        free(temp);
    }
    else
    {
      front=front->next;
      rear->next=front;
      free(temp);
    }
  }
}
void display()
{
   temp=front;
   if(front==NULL)
   {
    printf("q empty");
   } 
   else
   {
    while(temp->next!=front)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("%d\n",temp->data);
   }
}
void main()
{
    int choice ;
    printf ("circular queue operations are\n");
    printf(" 1.enqueue   2.dequeue  3.display 4.exit\n");
    do
    {
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:enq();
            break;
            case 2:deq();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            break;
            default:
            printf("enter a valid choice");
        }
    }
    while(choice!=4);
}