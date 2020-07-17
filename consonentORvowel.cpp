//To check the given character is vowel or consonent.

#include<stdio.h>
int main()
{
	char c;
	printf("Enter the alphabet: ");
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	    printf("%c is Vowel",c);
    else
        printf("%c is consonent",c);
}
