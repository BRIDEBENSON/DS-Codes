#include <stdio.h>
#include <stdlib.h>
int noelements=0;
struct node
{
int data;
struct node *prev;
};
struct node *top=NULL;
void push(int val)
{
	struct node *newnode;
	newnode=(struct node *)malloc (sizeof(struct node));
	newnode->data=val;
	if(top==NULL)
	{
		newnode->prev=NULL;
		top=newnode;
		printf("node inserted");
	}
	else
	{
	newnode->prev=top;
	top=newnode;
	printf("node inserted");
	}
	noelements++;
}
void pop()
{
	if(top==NULL)
		printf("stack underflow");
	else
	{
		struct node *temp=top;
		int tempdata=temp->data;
		top=top->prev;
		temp->prev=NULL;
		free(temp);
		printf("node deleted");
	}
noelements--;
}
void display()
{
	if(top==NULL)
		printf("there is nothing to display");
	else
	{	 int no=noelements;
		struct node *temp= top;
		while(no!=0)
		{
			printf("%d ",temp->data);
			temp=temp->prev;
			no--;
		}
	}
}

void main()
{
int ch, entry;
while(1)
{
printf("\n\t\tSTACK MENU\n1)PUSH\n2)POP\n3)DISPLAY\n4)EXIT\nENTER YOUR CHOICE");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
	printf("enter the no to be pushed:");
	scanf("%d",&entry);
	push(entry);
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
	exit(0);
}
default:
{
	printf("wrong input");
}
}
}	
}






