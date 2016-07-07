#include<stdio.h>

int main(void)
{
	int fact = 1,num;
	printf("\nEnter any number\n");
	scanf("%d",&num);
	printf("\nFactorial of the given number %d! is",num);
	if(num == 0)
		printf(" %d\n",fact);
	else
	{
		while(num > 0)
		{
			fact = fact * num;
			num--;
		}
		printf(" %d\n",fact);
	}
	return 0;
}	
