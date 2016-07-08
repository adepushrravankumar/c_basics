#include<stdio.h>
int main(void)
{
	int number, rev = 0;
	printf("\nEnter any number\n");
	scanf("%d",&number);
	printf("\nThe reverse of the number %d is ",number);

	while(number > 0)
	{
		rev = (rev * 10) + (number % 10);
		number = number / 10;
	}
	printf(" %d \n", rev);
	
	return 0;
}
