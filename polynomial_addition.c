 // polynomial addition
#include<stdio.h>
#include<stdlib.h>
void main()
{
struct node
{
	int coeff;
	int pow;
	struct node* next;
};
struct node *head1=NULL, *pos1=NULL, *tail1=NULL, *head2=NULL, *pos2=NULL, *tail2=NULL, *head3=NULL, *pos3=NULL, *tail3=NULL;
int coef, power, i, sumcoef;
printf("enter the largest power of both the polynomials");
scanf("%d",&power);
printf("enter terms of the first polynomial from largest to smallest");
for(i=power;i>=0;i--)
{
	printf("\nenter coefficient for x^%d:",i);
	scanf("%d",&coef);
	if(head1==NULL)
	{
		head1=(struct node*) malloc (sizeof(struct node));
		head1->coeff=coef;
		head1->pow=i;
		pos1=head1;
		tail1=head1;
	}
	else	
	{
		tail1->next=(struct node*) malloc (sizeof(struct node));
		tail1=tail1->next;
		tail1->coeff=coef;
		tail1->pow=i;
	}
}
printf("enter terms of the second polynomial from largest to smallest");
for(i=power;i>=0;i--)
{
	printf("\nenter coefficient for x^%d:",i);
	scanf("%d",&coef);
	if(head2==NULL)
	{
		head2=(struct node*) malloc (sizeof(struct node));
		head2->coeff=coef;
		head2->pow=i;
		pos2=head2;
		tail2=head2;
	}
	else	
	{
		tail2->next=(struct node*) malloc (sizeof(struct node));
		tail2=tail2->next;
		tail2->coeff=coef;
		tail2->pow=i;
	}
}
for(i=power;i>=0;i--)
{
	sumcoef=pos1->coeff+pos2->coeff;
	pos1=pos1->next;
	pos2=pos2->next;
	if(head3==NULL)
	{
		head3=(struct node*) malloc (sizeof(struct node));
		head3->coeff=sumcoef;
		head3->pow=i;
		pos3=head3;
		tail3=head3;
	}
	else	
	{
		tail3->next=(struct node*) malloc (sizeof(struct node));
		tail3=tail3->next;
		tail3->coeff=sumcoef;
		tail3->pow=i;
	}
}
printf("\nsum of polynomials is:");
for(i=power;i>=0;i--)
{
	if(i==0)
		printf("%dx^%d\n",pos3->coeff,pos3->pow);
	else
	{
		printf("%dx^%d+",pos3->coeff,pos3->pow);
		pos3=pos3->next;
	}
}
}


	
	
	




