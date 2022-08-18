#include<stdio.h>
#include<stdlib.h>
void main()
{
struct node
	{
	int data;
 	struct node *next;
	};
struct node *head=NULL, *pos=NULL,*tail=NULL;
int ch, entry,i=0, key,x=0;
while(1)
{
printf("\n1)INSERT(APPEND)\n2)DISPLAY\n3)COUNT\n4)SEARCH\n5)DELETE\n6)EXIT");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
	case 1:
	{
		printf("\n Enter the data:");
		scanf("%d",&entry);
		if(head==NULL)
		{
			head=(struct node*)malloc (sizeof(struct node));
			head->data=entry;
			pos=head;
			tail=head;
			i++;
		}
		else
		{
			tail->next=(struct node*) malloc(sizeof(struct node));
			tail=tail->next;
			tail->data=entry;
			i++;
		}
		break;
	}
	case 2:
	{
		pos=head;
		printf("\nTHE ELEMENTS ARE:");
		while(pos!=NULL)
		{
			printf("%d ",pos->data);
			pos=pos->next;
		}
		break;
	}
	case 3:
	{
		printf("the no of elements in the list is %d",i-1);
		break;
	}
	case 4:
	{
		printf("\nenter the element to be searched:");
		scanf("%d",&key);
		pos=head;
		i=1;x=0;
		while(pos!=NULL)
		{
			if(key==pos->data)
			{
				x++;
				printf("the element is present in position %d",i);
			}
		i++;
		pos=pos->next;
		}
		if(x==0)
			printf("the element is not present in the list");
		break;
	}
	case 5:
	{
		struct node *temp=head;
		printf("\n enter the position of the data to be deleted:");
		scanf("%d",&entry);
		if(entry==0)
		{
			head=head->next;
			temp->next=NULL;
			free(temp);
		}
		else
		{
			for(int i=0;i<entry-1;i++)
			{
				temp=temp->next;
			}
		struct node *del=temp->next;
		temp->next=temp->next->next;
		del->next=NULL;
		free(del);
		}
		break;
	}
	
	case 6:
	{
	printf("\ngoodbye");
	exit(0);
	}
}
}
} 
	

