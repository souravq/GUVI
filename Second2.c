#include <stdio.h>

int main(void) {
	// your code goes here
	int N,r,sum=0,temp=0;
	scanf("%d",&N);
	temp=N;
	while(N>0)
	{
		r=N%10;
		sum=(sum*10)+r;
		N=N/10;
	}
	if(sum==temp)
	{
		printf("yes");
		
	}
	else
	   printf("no");
	
	return 0;
}
