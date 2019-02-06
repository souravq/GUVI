#include <stdio.h>

int main(void) {
	// your code goes here
	int N;
	scanf("%d",&N);
	if(N==0)
	   printf("Zero");
	else if(N>0)
	   printf("Positive");
	else
	   printf("Negative");
	return 0;
}
