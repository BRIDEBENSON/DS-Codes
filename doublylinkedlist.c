#include<stdio.h>
#include<stdlib.h>
void main()
{
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
int ch,entry;
struct node *head=NULL, *pos=NULL,*tail=NULL;
while(1)
{
	printf("\n\t\tMENU \n1)APPEND\n2)DISPLAY(FORWARD)\n3)DISPLAY(REVERSE)\n4)DELETE\n5)EXIT\n\nENTER CHOICE");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			printf("enter data:");
			scanf("%d",&entry);
			if(head==NULL)
			{
				head=(struct node*) malloc(sizeof(struct node));
				head->prev=NULL;
				head->data=entry;
				head->next=NULL;
				pos=head;
				tail=head;
			}
			else
			{
				tail->next=(struct node*)malloc(sizeof(struct node));
				tail->next->prev=tail;
				tail->next->data=entry;
				tail->next->next=NULL;
				tail=tail->next;
			}
		break;
		}
		case 2:
		{
			pos=head;
			printf("the elements are\n");
			while(pos!=NULL)
			{
				printf("%d ",pos->data);
				pos=pos->next;	
			}
		break;
		}	
		case 3:
		{
		pos=tail;

		printf("the elements are\n");
		while(pos!=NULL)
		{
			printf("%d ",pos->data);
			pos=pos->prev;
		}
		break;
		}
		case 4:
		{
		struct node *del, *temp;
		printf("\nenter the position the element needs to be deleted from(from zero):");
		scanf("%d",&entry);
		if(entry==0)
		{
			struct node *del=head;
			head=head->next;
			del->next=NULL;
			head->prev=NULL;
			free(del);
		}
			else 
			{
				temp=head;
				for(int i=0;i<entry-1;i++)
				{	
				temp=temp->next;
				}
				if(temp->next->next==NULL)
				{
					struct node *del=tail;
					tail=temp;
					temp->next=NULL;
					del->prev=NULL;
					free(del);
				}
					else
					{
						struct node *del= temp->next;
						temp->next=temp->next->next;
						temp->next->prev=temp;
						del->prev=NULL;
						del->next=NULL;
						free (del);
					}
			}
		break;
		}
		
		case 5:
		{
		exit(0);
		}

	}
}
}	
9
