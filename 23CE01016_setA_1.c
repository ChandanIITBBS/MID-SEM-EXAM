#include<stdio.h>
// To find volume and surface area of a sphere , radius given by user.
int main(){
    float radius, volume, surface_area;
    float PI=3.14;

    printf("Enter the radius of sphere: ");
    scanf("%f",&radius);
    
    volume = (4.0/3.0)*PI*radius*radius*radius;
    surface_area = 4.0*PI*radius*radius;

    printf("THe volume of the sphere with radius (%.2f) is %.2f\n",radius,volume);
    printf("THe surface area of the sphere with radius (%.2f) is %.2f\n",radius,surface_area);

    return 0;
}