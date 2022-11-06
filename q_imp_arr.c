#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void insert();
void delete();
void display();
int queue[MAX];
int rear=-1;
int front=-1;
void main()
{
    int choice;
    while(1)
    {
        printf(" 1. insert element \n 2. delete element \n 3. display queue element \n 4. exit\n");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
            insert();
            break;
            }
            case 2:
            {
            delete();
            break;
            }
            case 3:
            {
            display();
            break;
            }
            case 4:
            {
            printf("\n exit");
            break;
            }
            default:
            {
            printf("wrong choice");
            }

        }
    }

}
void insert()
{
     int item;
     if(rear==MAX-1)
     printf("queue overflow");
     else
     {
       if(front==-1)
       front=0;
       printf("insert element");
       scanf("%d",&item);
       rear=rear+1;
       queue[rear]=item;
     }
}
void delete()
{
    if(front==-1||front>rear)
    {
        printf("queue underflow");
        return;
    }
    else
    {
     printf("element deleted is %d\n",queue[front]);
     front=front+1;
    }
}
void display()
{
    int i;
    if(front==-1)
    printf("queue is empty");
    else
    {
     printf("queue is :\n");
     for(i=0;i<=rear;i++)
     printf("%d\n",queue[i]);

    }
}