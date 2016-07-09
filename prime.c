#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i=1,j,temp=0;
	int range,k,count=0;
	printf("\nEnter the range\n");
	scanf("%d",&range);
	k = range;
	while(k != 0)
	{
		while(i)
		{
			for(j = 1; j <= i; j++)
			{
				if(i%j == 0)
					temp++;
			}
			if(2 == temp)
			{
				printf("%d\n",i);
				count++;
				if(count == range)
					exit(0);
			}
			temp = 0;
			i++;
		}
		k--;
		i = 1;
	}
	return 0;
}
