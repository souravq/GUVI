#include <stdio.h>

int main(void) {
	// your code goes here
	int N,i,fact=1;
	scanf("%d",&N);
	if(N==0)
	  printf("1");
	else
	{
		for(i=1;i<=N;i++)
		{
			fact=fact*i;
		}
		printf("%d",fact);
	}
	
	return 0;
}
