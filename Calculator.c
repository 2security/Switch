#include<stdio.h>
#include<stdlib.h>
int main()
	{
	int choice,m,n;
	printf("\nEnter two number");
	scanf("%d%d",&m,&n);
	
	printf("1.Addition\n");
	printf("2.Substruction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Mod\n");
	
	printf("\nEnter your choice");
	scanf("%d",&choice);

	switch(choice)
		{
		case 1:
			printf("\nSum=%d\n\n",m+n);
			break;
		case 2:
			printf("\nDifference=%d\n\n",m-n);	
			break;
		case 3:
			printf("\nProduct=%d\n\n",m*n);
			break;
		case 4:
			printf("\nQuotient=%d\n\n",m/n);
			break;
		case 5:
			printf("\nModulus=%d\n\n",m%n);
			break;
		default:
			printf("\n Wrong choice\n\n");				
		}
	printf("\n");
	return 0;
	}
