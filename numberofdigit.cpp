//

#include<stdio.h>
int main()
{
	int n,count=0;
	printf("Enter number of terms: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i>=1 && i<=9)
		{
			count = count + 1;
		}
		else if(i>9 && i<100)
		{
			count = count + 2;
		}
	}
	printf("Total number of digits from 1 to %d is %d",n,count);
}
