#include<stdio.h>
int main()
{
    int i,n,j;
    printf("enter the no");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j>i;j--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(j=i-1;j>=1;j--){
            printf("%d",j);
        }
        for(j=n-i;j>=1;j--){
            printf(" ");
        }
        
        printf("\n");
    }
    for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(j=1;j<=n-i;j++){
            printf("%d",j);
        }
        for(j=n-(i+1);j>=1;j--){
            printf("%d",j);
        }
        for(j=i;j>=1;j--){
            printf(" ");
        }
        
        printf("\n");
    }




}
