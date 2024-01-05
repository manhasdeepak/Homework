#include<stdio.h>
void main()
{
    int rollno[50],i,n,j;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the values");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&rollno[i]);
    }
    for(j=0;j<=n;j+=2)
    {
        printf("the odd numbers are :%d\t",rollno[j]);
    }
    printf("\n");
}