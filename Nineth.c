#include <stdio.h>

int main(void) {
	// your code goes here
	int i,N,K,sum=0;
	int A[100];
	scanf("%d %d",&N,&K);
	for(i=0;i<N;i++)
	  scanf("%d",&A[i]);
	for(i=0;i<K;i++)
	  sum=sum+A[i];
	printf("%d",sum);
	return 0;
}
