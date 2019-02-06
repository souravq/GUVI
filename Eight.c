#include <stdio.h>

int main(void) {
	// your code goes here
	int N,i,sum=0;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	  sum=sum+i;
	printf("%d",sum);
	return 0;
}
