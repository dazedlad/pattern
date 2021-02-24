#include<stdio.h>
int main()
{
    int i,j,k,n;
     printf("enter the no.");
    scanf("%d",&n);
   for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
         printf(" ");

        for(k=0;k<2*i-1;k++)
            printf("*");
        printf("\n");
    }
     for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
         printf(" ");

        for(k=i;k<2*n-i-1;k++)
            printf("*");
        printf("\n");
    }
return 0;
}



