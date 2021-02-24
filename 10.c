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
return 0;
}


