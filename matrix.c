#include <stdio.h>
#include<stdlib.h>
int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	int *a = (int *)malloc(n*n*sizeof(int));
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d ",(a+i*n+j));
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",*(a+i*n+j));
		}
		printf("\n");
	}
	return 0;
}
