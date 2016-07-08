#include<stdio.h>

int main(void)
{
	int row,i,j,k,temp=0;
	printf("\nEnter the number of rows\n");
	scanf("%d",&row);
	temp = row;
	system("clear");
	for(i = 1; i <= row; i++)
	{
/*		for(j = 1; j <= temp; j++)
			printf(" ");
*/		temp--;
		for(k = 1; k <= i ; k++)
			printf("*");

		printf("\n");
	}
	
	return 0;
}
