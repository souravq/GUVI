#include<stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
	if(N>0){
	if(N%2==0)
	    printf("Even");
	else
	    printf("odd");
	}
	else 
	   printf("Invalid");
	
	return 0;
