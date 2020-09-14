#include<stdio.h>
int main()
	{
	int m,n;
	printf("Enter two number");
	scanf("%d%d",&m,&n);
	
	
	switch(m>n)
		{
		case 1:
			{
			printf("MAX{%d,%d}=%d\n",m,n,m);
			break;
			}
		case 0:
			{
			printf("MAX{%d,%d}=%d\n",m,n,n);
			break;
			}
		}
	printf("\n");
	return 0;
	}

