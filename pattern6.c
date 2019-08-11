#include<stdio.h>
int main()
{
        int a[100],i,j,k,n,c;
        printf("enter a number");
        scanf("%d",&n);
        for(i=0;i<=n;i++)

        {
                for(j=0;j<=i;j++)
             	{
			c=(i+j)%2;
			switch(c)
			{
				case 0:
				printf("%d  ",0);
				       break;
				case 1:
				printf("%d  ",1);
				       break;
				case 2:break;
			}	      
			}
		printf("\n");
	}
  	return 0;
}	
