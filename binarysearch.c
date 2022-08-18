#include <stdio.h>
#include <time.h>
#include <stdlib.h>
struct timeval t0;
struct timeval t1;
float elapsed;	

float timedifference_msec(struct timeval t0,struct timeval t1)
{
	return(t1.tv_sec - t0.tv_sec) *1000.0f + (t1.tv_usec - t0.tv_usec)/1000.f;
}
void main()
{
struct timeval t0;
struct timeval t1;
float elapsed;
int n;
int i,j,temp,min,key,pos=-1,mid,low,high,f=0;
printf("enter the no of elements in the array:");
scanf("%d",&n);
int ar[n];
srand((unsigned) time(NULL)*getpid());
if(ar[n]!=NULL)
	{
		for(i=0;i<n;i++)
		{
			ar[i]=rand()%100;
		}
	}
for(i=0;i<n-1;i++)
{
	min=i;
	for(j=i+1;j<n;j++)
	{
	if(ar[j]<ar[min])
	min=j;
	}
	if(min!=i)
	{
		temp=ar[i];
		ar[i]=ar[min];
		ar[min]=temp;
	}
}
printf("enter the element to be searched:");
scanf("%d",&key);
gettimeofday(&t0,NULL);
low=0;
high=n;
while(low<=high)
{
mid=(low+high)/2;
if(ar[mid]==key)
{
	printf("element was found at the %dth position in the array\n",mid+1);
	gettimeofday(&t1,NULL);
	elapsed= timedifference_msec(t0,t1);
	printf("Code executed in %f milliseconds.\n",elapsed);
	printf("the elements of the array were");
	for(i=0;i<n;i++)
	{
		printf("\n%d ",ar[i]);
	}
	exit(0);
}
else if (key<ar[mid])
high=mid-1;
else
low=mid+1;
}
printf("the element was not found\n");
gettimeofday(&t1,NULL);
elapsed= timedifference_msec(t0,t1);
printf("Code executed in %f milliseconds.\n",elapsed);
printf("the elements of the array were\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
}


