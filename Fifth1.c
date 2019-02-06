#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b&&a>=c)
	  printf("%d",a);
   else if(b>=c&&b>=a)
	  printf("%d",b);
   else
	  printf("%d",c);
	return 0;
}
