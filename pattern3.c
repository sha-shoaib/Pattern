#include<stdio.h>
int main()
{
        int i,j,n;
        printf("enter a number");
        scanf("%d",&n);
        for(i=1;i<=n;i++)

        {
                for(j=1;j<=i;j++)
                {
                        printf("*");
                }
                printf("\n");
        }
	 for(;n>=1;n--)

        {
                for(j=n;j>=1;j--)
                {
                        printf("*");
                }
                printf("\n");
        }

        return 0;
}

