#include <stdio.h>

int main(void) {
	// your code goes here
	int temp,N,r,sum=0;
	scanf("%d",&N);
	temp=N;
	while(N>0)
	{
		r=N%10;
		sum=sum+(r*r*r);
		N=N/10;
	}
	if(sum==temp)
	  printf("yes");
	else
	  printf("no");
	return 0;
}
