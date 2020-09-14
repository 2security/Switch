#include<stdio.h>
int main()
	{
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	
	switch(num>0)		
		{
		case 1:
			printf("\n Entered number %d is positive number ",num);
			break;
		case 0:
			switch(num<0)
				{
				case 1:
					printf("\n Entered number %d is negative",num);
					break;
				case 0:
					printf("\n Entered number %d is 0 ",num);
					break;
				}
		}
	printf("\n ");
	return 0;	
	}

