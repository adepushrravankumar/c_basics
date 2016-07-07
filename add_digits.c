#include<stdio.h>

int main(void)
{
	int num,result = 0;
	printf("\nEnter any number\n");
	scanf("%d",&num);
	printf("\nThe sum of the digits of the number %d is ",num);
	while(num > 0)
	{
		result = (result) + (num % 10);
		num = num/10;
	}
	printf("%d\n",result);

	return 0;
}
