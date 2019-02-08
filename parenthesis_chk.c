#include<stdio.h>
#include<string.h>
char stack[100];
int count =0;
int top = -1 ;
 
void push()
{
	top = top + 1;
	stack[top]='(';
	
}


void main()
{
	int i,l;
	printf("ENTER THE STRING\n");
	scanf("%s",&stack);
    l = strlen(stack);
    for ( i = 0; i < l; ++i)
    {
    	if(stack[i]=='(')
    	{
    		push();
    	}
    	if (stack[i]==')')
    	{
    		if (top==-1)
    		{
    			printf("NOT CORRECT\n");
    			return ;
    		}
    		if(stack[top]=='(')
    		{
    			top = top - 1;
    			count = count + 1 ;
    		}
    	}
    }

    if (top!=-1)
    {
    	printf("NOT CORRECT\n");
    	
    }
    else
       {
           printf("CORRECT\n");
           printf("COUNT = %d",count);
       }
}
