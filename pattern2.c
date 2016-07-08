#include<stdio.h>

int main(void)
{
	int i,j,row,k,temp;
	
	printf("\nEnter ni of rows\n");
	scanf("%d",&row);
	system("clear");
	temp = row;
	for(i = 1; i <= row; i++)
	{
		for(j = 1; j<= temp; j++)
		{
			printf(" ");
		}
		temp--;
		for(k = 1; k <= 2*i - 1; k++)
		{
			if(k % 2 ==1)
				printf("*");
			else

				printf("A");
		}
	
		printf("\n");
	}
	return 0;
}
