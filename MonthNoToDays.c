#include<stdio.h>
int main()
	{
	int mno;
	printf("Enter the month number");
	scanf("%d",&mno);
	
	switch(mno)
		{
		case 1:
			{
			printf("\n January months 31 days\n");
			break;
			}
		case 2:
			{
			printf("\n February month 28 or 29 days\n");
			break;
			}
		case 3:
			{
			printf("\n March month 31 days\n");
			break;
			}
		case 4:
			{
			printf("\n April month 30 days\n");
			break;
			}
		case 5:
			{
			printf("\n May month 31 days\n");
			break;
			}
		case 6:
			{
			printf("\n June month 30 days\n");
			break;
			}
		case 7:
			{
			printf("\n July month 31 days\n");	
			break;
			}
		case 8:
			{
			printf("\n August month 31 days\n");
			break;
			}
		case 9:
			{
			printf("\n September month 30 days\n");
			break;
			}
		case 10:
			{
			printf("\n October month 31 days\n");
			break;
			}
		case 11:
			{
			printf("\n November month 30 days\n");
			break;
			}
		case 12:
			{
			printf("\n December month 31 days\n");
			break;
			}
		default:
			printf("\n OOPS!! Enter correct month number\n");
		}
	printf("\n");
	return 0;
	}
