#include <stdio.h>

int main(void)
{
	int i ,j, count = 0;
	int n;
	printf("\nEnter number\n");
	scanf("%d",&n);
		
	for(i = 2 ; i < n; i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j == 0)
			{
				count++;
			}
		}
		if(count == 2)
			printf("\n%d\n",i);
		count = 0;
	}
	return 0;
}
