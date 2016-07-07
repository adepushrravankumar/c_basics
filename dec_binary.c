#include <stdio.h>

int main(void)
{
	int dec,bit_pos,temp;
	printf("\nPrintf enter any decimal number\n");
	scanf("%d",&dec);

	for(bit_pos = 31; bit_pos >= 0;bit_pos--)
	{
		temp = dec >> bit_pos;
		
		if(temp & 1 == 1)
			printf("1");
		else
			printf("0");
	}
	printf("\n\n");

	return 0;
}
