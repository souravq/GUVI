#include <stdio.h>

int main(void) {
	// your code goes here
	int N,A,D,t,ans;
	float s,r;
	scanf("%d %d %d",&N,&A,&D);
	t=((2*A)+((N-1)*D));
	s=((float)N/2);
	r=(float)t*s;
	ans=(int)r;
	printf("%d",ans);
	
	return 0;
}
