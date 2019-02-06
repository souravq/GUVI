#include <stdio.h>
#include <string.h>


int main() {
	// your code goes here
	char str[100];
	int i;
	gets(str);
	i=strlen(str);
	if(i==1){
	if((str[0]>='a'&&str[0]<='z')||(str[0]>='A'&&str[0]<='Z'))
	  printf("Alphabet");
	 
	else
	  printf("No");
	}
	else
	  printf("No");
	return 0;
}
