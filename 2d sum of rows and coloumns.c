#include<stdio.h>
void main()
{
    int a[3][3],sumrows,sumcoloumns,i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("\n enter the array elements:a[%d][%d]",i,j);
        scanf("%d",&a[i][j]);
        }
}
        for(i=0;i<3;i++)
        {
         sumrows=sumcoloumns=0
         for(j=0;j<3;j++)  
        {
         sumrows=sumrows+a[i][j];
         sumcoloumns=sumcoloumns+a[i][j];
    }
    printf("\n%d:sumrows=%d and %d:sumcoloumns=%d",i,sumrows,i,sumcoloumns);
for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
    }
        }
