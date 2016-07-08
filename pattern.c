#include<stdio.h>

int main(void)
{
	int row,i,j,k,temp=0;
	system("clear");
	printf("\nEnter the number of rows\n");
	scanf("%d",&row);
	temp = row;
	for(i = 1; i <= row; i++)
	{
		for(j = 1; j <= temp; j++)
			printf(" ");
		temp--;
		for(k = 1; k <= 2*i - 1 ; k++)
			printf("*");

		printf("\n");
	}
	
	return 0;
}
