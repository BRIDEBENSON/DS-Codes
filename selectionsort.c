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
int i,j,temp, min;
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
printf("\nthe array before sorting is");
for(i=0;i<n;i++)
{
	printf("%d ",ar[i]);
}
gettimeofday(&t0,NULL);
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
gettimeofday(&t1,NULL);
printf("the sorted array is:\n");
for(i=0;i<n;i++)
{
printf("%d ",ar[i]);
}
elapsed= timedifference_msec(t0,t1);
printf("\nCode executed in %f milliseconds.\n",elapsed);
}
