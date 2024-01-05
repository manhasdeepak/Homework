#include<stdio.h>
void main()
{
    int i,j,m,n;
    printf("Enter the limit");
    scanf("%d%d",&n&m);
    int a[m][n],b[m][n],c[m][n];
    if(m!=n)
    printf("matrix multiplicantion is not possible");
    else
    {
        printf("a matrix elemenrts");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            scanf("%d",&b[i][j]);
        }
        printf("b matrix elements");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            scanf("%d",&a[i][j];)
        }
        printf("B matrix elements");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            scanf("%d",&b[i][j]);
        }
        for(i=0;i<m;i++)
        {
             c[i][j]=0;
                for(int k=0;k<n;k++)
            {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
          
    }
}
printf("The result matrix is....\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    printf("%d\t",c[i][j]);
    printf("\n");
}
}