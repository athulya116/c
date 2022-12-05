#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
int val;
struct node *next;
};
struct node *head;
void main()
{
int choice=0;
printf("\n stack operations using linked list\n");

while(choice!=4)
{
printf("\n\nchoose an operation given below\n");
printf("1. PUSH \n 2. POP \n 3. DISPLAY  \n 4.EXIT ");
printf("Enter your choice\n");
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
printf("exiting");
break;
}
default:
{
printf("please enter a valid choice");
}
};
}
}
void push()
{
int val;
struct node *ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("not able to push element");
}
else
{
printf("enter the value");
scanf("%d",&val);
if(head==NULL)
{
ptr->val=val;
ptr->next=NULL;
head=ptr;
}
else
{
ptr->val=val;
ptr->next=head;
head=ptr;
}
printf("item pushed");
}
}
void pop()
{
int item;
struct node *ptr;
if (head==NULL)
{
printf("Underflow");
}
else
{
item=head->val;
ptr=head;
head=head->next;
free(ptr);
printf("item popped ");
}
}
void display()
{
int i;
struct node *ptr;
ptr=head;
if(ptr==NULL)
{
printf("Stack is empty");
}
else
{
printf("printing stack elemnts\n");
while(ptr!=NULL)
{
printf("%d\n",ptr->val);
ptr=ptr->next;
}
}
}
