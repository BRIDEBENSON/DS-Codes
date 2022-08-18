#include<stdio.h>
#include <stdlib.h>
# define n 5
void main()
{
int queue[n], front=0, rear=0, i=0 ,ch, entry;
int x=n;
while(1)
{
printf("QUEUE OPERATIONS\n1)INSERT\n 2)DELETE \n3)DISPLAY \n4)EXIT\nENTER YOUR CHOICE");
scanf("%d",&ch);
switch(ch)
{
	case 1:
	{
		if(rear==x)
		printf("queue is full");
		else
		{
			printf("enter the no to be inserted");
			scanf("%d",&entry);
			queue[rear]=entry;
			rear++;
			printf("entered");
		} break;
	}
	case 2:
	{
		if(front==rear)
		printf("queue is empty");
		else
		{
			front++;
			x--;
		printf("deleted");
		} break;
	}
	case 3:
	{
		if(front==rear)
		printf("there is nothing to display");
		else
		{
			for(i=front;i<rear;i++)
			{
				printf("%d	",queue[i]);
			}
		} break;
	}
	case 4:
	{
	exit(0);
	}
	default:
                printf("Wrong Choice: please see the options");
}
}
}
			
