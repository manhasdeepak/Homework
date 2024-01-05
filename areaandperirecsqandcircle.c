#include<stdio.h>
void main()
{
    float length, breadth, area1, perimeter; 
    printf("enter the length and the breadth of the rectangle here"); 
    scanf("%f%f", &length, &breadth); 
    area1=length*breadth; 
    perimeter=2*(length+breadth); 
    printf("the area is %.2f and the perimeter is %.2f\n", area1, perimeter);

    
float r;
printf("enter the radius"); 
scanf("%f", &r); 
float area, peri;
area=3.14*r*r; 
peri=3.14*2*r; 
printf("area of the circle is %.2f\n", area); 
printf("perimeter is %.2f\n", peri);  

float side; 
printf("enter the side"); 
scanf("%f", &side); 
float area2, peri2;
area2=side*side; 
peri2=4*side; 
printf("area of the square is %.2f\n", area2); 
printf("perimeter is %.2f\n", peri2);  
}
