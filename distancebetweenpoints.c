#include<stdio.h>
#include<math.h>
void main()
{
    int x1,x2,y1,y2;
    printf("enter the 4 points:");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    float distance;
    distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("distance between points=%d",distance);
}

