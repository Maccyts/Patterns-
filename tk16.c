#include <stdio.h>
int i,j,n,a=1,b=1;
int main()
{
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        printf(" ");
        for(j=1;j<=i;j++)
        {
            if(i%2)
            {
            printf("%2d ",a++);
            }
            else
            {
            printf("%2d ",a);
            a--;
            }
        }
        if(i%2==0)
            b=b+2;
        a=a+b;
        printf("\n");
    }
            
}
    
