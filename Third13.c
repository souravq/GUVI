#include<stdio.h>

int main()
{
	char ch;
	int i;
	scanf("%c",&ch);
	i=(int)(ch);
	if((i>=65&&i<=90)||(i>=97&&i<=122))
	{
		ch=(char)i;
		if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
		  printf("Vowel");
		else
		  printf("Consonant");
	}
	else
	  printf("Invalid");
	
	return 0;
}
