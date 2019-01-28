#include<stdio.h>
#include<stdlib.h>

int chkpalin(int n)
{
	int m = n;
	int r;
	int reverse = 0;
	while(m!=0)
	{
		    r = m%10;
        reverse = (reverse*10) + r;
        m = m/10;
	}

	if(reverse==n)
		 return 1;
	else 
     return 0;
}

int main(int argc, char const *argv[])
{
	int less=1;
	int num = atoi(argv[1]);
	int n = atoi(argv[2]);

    if(n==1)
    {
    	printf("ENTER VALID NUMBER\n");
    }

    int temp = 0;
    while(temp<n)
    {
     less = less * 10;
     temp++;
    }
     
	  printf("%d\n%d   %d",num,n,less);
    
    while(num<less)
    {
    	if (chkpalin(num))
    		printf("%d ",num);
      num++;
    }	
	return 0;
}
