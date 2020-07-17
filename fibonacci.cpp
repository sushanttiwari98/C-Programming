//To print fibonacci series.

#include<stdio.h>
#include<conio.h>
int main()
{
	int x=0, y=1, z, n, i;
	printf("Enter the number of terms to print in fibonacci series: ");
	scanf("%d",&n);
	printf("%d\n",x);
	printf("%d\n",y);
	for(i=2;i<n;i++)
	{
		z=x+y;
		printf("%d\n",z);
		x=y;
		y=z;
	}
	printf("Done");
}
