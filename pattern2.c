#include<stdio.h>
int main()
{
        int j,n;
        printf("enter a number");
        scanf("%d",&n);
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

