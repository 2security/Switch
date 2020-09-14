#include<stdio.h>
int main()
	{
	char ch;
	printf("Enter character");
	scanf("%c",&ch);
	
	if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
		{
		switch(ch)	
			{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				printf("ALPHABET %c is VOWEL",ch);
				break;
	
			default:
				printf("ALPHABET %c is CONSONANT",ch);
			}
		}
	else
		printf("\n OOPS!!Not an character,Please enter an character");
	printf("\n");
	return 0;
	}

