//Find the greatest number in three numbers.

#include<stdio.h>
int main()
{
	int x, y, z;
	printf("Enter first number: \n");
	scanf("%d",&x);
	printf("Enter second number: \n");
	scanf("%d",&y);
	printf("Enter third number: \n");
	scanf("%d",&z);
	if(x>y)
	{
		if(x>z)
		    printf("x is greatest = %d.",x);
		else
		    printf("z is greatest = %d.",z);
	}
	else
	{
		if(y>z)
		    printf("y is greatest = %d.",y);
	    else
	        printf("z is greatest = %d.",z);
	}
}
