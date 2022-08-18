#include<stdio.h>
#include<stdlib.h>
#define n 5
int top= -1;
int stack[n];
void push(int val)
{
	if(isfull())
	{
	printf("\noverflow");
	}
	else
	{
	top++;
	stack[top]=val;
	printf("\n%d pushed",stack[top]);
	}
}
void pop()
{
	if(isempty())
	{
	printf("\nunderflow");
	}
	else
	{
	printf("\n%d popped", stack[top]);
	stack[top]=-1;
	top--;
	}
}
int isfull()
{
	if(top==n-1)
	return 1;
	else
	return 0;
}
int isempty()
{
	if(top==-1)
	return 1;
	else
	return 0;
}
void findtop()
{
	printf("\ntop position %d",top);
	printf("\n top value %d", stack[top]);
}
void display()
{
int i, x;
x=top;
for(i=x;i>=0;i--)
printf("\n %d",stack[i]);
}
void main()
{
int ch,entry;
while(1)
{
printf("\n\t\tSTACK OPERATIONS MENU\n1)PUSH\n2)POP\n3)FIND TOP\n4)DISPLAY\n5)EXIT\n");
printf("enter your choice");
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
	findtop();
	break;
}
case 4:
{
	display();
	break;
}
case 5:
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
	



