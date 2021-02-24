#include<stdio.h>
int main()
{
    int i,j,k,n;
     printf("enter the no.");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
         printf(" ");

        for(k=i;k<2*n-i-1;k++)
            printf("*");
        printf("\n");
    }
return 0;
}



