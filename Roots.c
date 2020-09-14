#include<stdio.h>
#include<math.h>
int main()
	{
	float a,b,c,t,t1,t2,real,ima;
	printf("Enter the co-efficients of the quadratic equation");
	scanf("%f%f%f",&a,&b,&c);
	
	t=sqrt(b*b-4*a*c);
	
	switch(t>0)
		{
		case 1:		
			t1=(-b+t)/(2*a);
			t2=(-b-t)/(2*a);
			printf("\nRoots are unequal and roots are %.2f %.2f\n",t1,t2);
			break;
		case 0:
			switch(t<0)
				{
				case 1:
					real=-b/(2*a);
					ima=sqrt(4*a*c-b*b)/(2*a);
					printf("\nTwo distinct complex Roots are %.2f+i%.2f and %.2f-i%.2f \n",real,ima,real,ima);
					break;
				case 0:
					printf("\nTwo roots are equal and roots are %.2f %.2f\n",-b/(2*a),-b/(2*a));
					break;
				}
		}
	printf("\n");
	return 0;
	}	
		
	
	

	
		
