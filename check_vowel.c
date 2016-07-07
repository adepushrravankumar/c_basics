


#include <stdio.h>
int main(void)
{
	char ch;
	printf("\nEnter a character\n");
	scanf("%c",&ch);

	switch(ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			printf("\nThe character '%c' is \"vowel\"\n",ch);
			break;

		default:
			printf("\nThe character '%c' is \"NOT vowel\"\n",ch);
	
	}
	return 0;
}
