#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the no.");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n;j>0;j--)
        {
            if(j>i+1)
                printf(" ");
            else printf("*");
        }printf("\n");
    }
return 0;
}
