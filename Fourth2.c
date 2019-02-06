#include <stdio.h>

int main(void) {
	// your code goes here
	int N,Q,i;
	scanf("%d %d",&N,&Q);
	for(i=N+1;i<Q;i++)
	{
		if(i%2!=0)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
