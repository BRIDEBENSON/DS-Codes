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
int i,key,pos=-1;
printf("enter the no of elements in the array:");
scanf("%d",&n);
int *ar;
ar = (long *)malloc(sizeof(long)*n);
srand((unsigned) time(NULL)*getpid());
if(ar!=NULL)
	{
		for(i=0;i<n;i++)
		{
			ar[i]=rand()%100;
		}
	}
printf("enter the element to be searched:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(key==ar[i])
	pos=i;
}
if(pos==-1)
{
	printf("the element is not present in the array");
	gettimeofday(&t1,NULL);
	elapsed= timedifference_msec(t0,t1);
	printf("Code executed in %f milliseconds.\n",elapsed);
}
else
{
	printf("the element %d was found at the %dth position in the array",key,pos+1);
	gettimeofday(&t1,NULL);
	elapsed= timedifference_msec(t0,t1);
	printf("Code executed in %f milliseconds.\n",elapsed);
}
printf("the elements of the array were:");
for(i=0;i<n;i++)
{
printf("%d ",ar[i]);
}
}

