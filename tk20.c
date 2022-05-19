#include <stdio.h>
int i,j,n,a=1;
int main()
{
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=n;j++)
	{
		if(i%2)
		printf("%2d",a++);
		else
		printf("%2d",a--);
	}
	if(a%2)
	    a=a+n+1;
	else
	    a=a+n-1;
	printf("\n");
	}
}

