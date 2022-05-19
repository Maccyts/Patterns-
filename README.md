#include <stdio.h>
int i,j,n;
int main()
{
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            if(j==1)
            {
                if(i%2)
                printf("%2d",i);
                else
                printf("%2d",i+1);
            }
            else if(j==n+1)
            {
                if(i%2)
                printf("%2d",i+1);
                else
                printf("%2d",i);
            
            }
            else
            {
                printf("%2d",i);
            }
        
        }
        printf("\n");
        
    }
}
