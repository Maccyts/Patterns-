#include <stdio.h>
int a=1,i,n,j,b=1;
int main()
{
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        printf(" ");
        for(j=1,a=1,b=i;j<=i;j++)
            {
                if(i%2)
                {
                printf("%d ",a%2);
                a++;
                }
                else
                {
                printf("%d ",b%2);
               b--;
               }
            }
            printf("\n");
        }
}


