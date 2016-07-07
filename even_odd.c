#include<stdio.h>

int main(void)
{
	int no;
	printf("\nEnter any no\n");;
	scanf("%d",&no);

	if(( no & 1) == 1)
		printf("\nThe given no '%d' is an 'Odd no'\n",no);
	else
		printf("\nThe given no '%d' is an 'Even no'\n",no);

	return 0;
}
