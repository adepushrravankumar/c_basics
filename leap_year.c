#include<stdio.h>

int main()
{
	int year;
	printf("\nEnter any year\n");
	scanf("%d",&year);
	
	if( (year % 100 != 0 && year % 4 == 0) || (year % 400 == 0))
		printf("\nThe year  %d is a leap year\n",year);
	else
		printf("\nThe year  %d is not a leap year\n",year);

	return 0;
	
}
