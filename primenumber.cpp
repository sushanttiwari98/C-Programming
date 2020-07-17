//To check prime number.

#include<stdio.h>
#include<math.h>
int main()
{
	int n, f=0, i;
	printf("Enter the number: \n");
	scanf("%d",n);
	if(n<2)
	    printf("Number is not prime.");
	else
	{
		for(i = 2; i <= sqrt(n); i++)
		{
			if(n%i == 0)
			{
				f = 1;
				break;
			}
		}
		if(f==1)
		    printf("Number is not prime.");
		else
		    printf("Number is prime.");
	}
}
