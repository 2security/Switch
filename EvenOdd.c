#include<stdio.h>
int main()
	{
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	
	switch(num%2)
		{
		case 1:
			{				
			printf("\n %d is odd number\n",num);
			break;
			}
		case 0:
			{
			printf("\n %d is even number\n",num);
			break;
			}
		default:
			printf("\n OOPS!!Not an number");
		}
	printf("\n");
	return 0;
	}

