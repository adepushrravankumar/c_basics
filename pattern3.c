#include<stdio.h>

int main(void)
{
	int i , j, k, row , l ,temp;
	printf("\n Enter no of rows\n");
	scanf("%d",&row);
	temp = row;
	system("clear");
	for(i = 1; i <= row; i++)
	{
		l = i;
		for(j = 1; j <= temp; j++)
		{
			printf(" ");
		}
		temp--;
		for(k = 1; k <= i; k++)
		{
			printf("%d",l);
			l++;
		}
		l--;
		l--;
		for(k = 1; k < i; k++)
		{
			printf("%d",l);
			l--;
		}
		printf("\n");
	}	

	return 0;
}
