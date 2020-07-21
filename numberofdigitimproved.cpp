#include<stdio.h>
#include<conio.h>
int main()
{
	int n, count=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	int i=1;
	while(i <= n)
	{
		count = count + (n-i+1);
		i = i * 10;
	}
	printf("%d",count);
}
