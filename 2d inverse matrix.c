#include<stdio.h>
void main()
{
    int a[3][3];
    int i,j;
    printf("enter the array elements:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        printf("to print the array values\n");
        for(i=0;i<3;i++)
        {
         for(j=0;j<3;j++)  
        {
         printf("%d\t",a[i][j]);
        }
        printf("\n");
        }
        printf("inverse matrix\n");
        for(i=0;i<3;i++)
        {
         for(j=0;j<3;j++)  
          {
         printf("%d\t",a[j][i]);
        }
        printf("\n");
        }
    }

