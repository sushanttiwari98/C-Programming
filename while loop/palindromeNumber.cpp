//To check number is palindrome or not.

#include<stdio.h>
#include<conio.h>
int main()
{
	int n,rev=0,rem,n1;
	printf("Enter the number: ");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n/10;
	}
	if(n1==rev)
	    printf("Palindrome.");
	else
	    printf("Not Palindrome.");
}
