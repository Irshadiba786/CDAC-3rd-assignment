#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the last term of series");
	scanf("%d",&n);
	for(i=1;i<n;i=i+2)
	{
		printf("%d ",i);
	}
	return 0; 
}
