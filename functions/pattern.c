#include<stdio.h>
void main()
{
	int n,i,j;
	printf("enter the number of lines");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		printf("%d \t",j);
		}
	printf("\n");
	}
}
