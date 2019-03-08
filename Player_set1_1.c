#include <stdio.h>
#include <string.h>

int main(void) {
	// your code goes here
	char str1[100],str2[100];
	int i,j,l;
	scanf("%s",str1);
	l=strlen(str1);j
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[l-1];
		l=l-1;
	}
	printf("%s",str2);

	return 0;
}
