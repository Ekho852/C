#include<stdio.h>

int main(){
    float Radius, Diameter, Pi, Circumference, Area;

    printf("Please enter the Radius of the Circle: ");
    scanf("%f", &Radius);

    // Computes Diameter
    Diameter = Radius * 2;

    // Assigns value to Pi
    Pi = 3.14159;

    // Computes Circumference
    Circumference = 2*Pi*Radius;

    // Computes Area
    Area = Pi*(Radius*Radius);

    printf("Diameter equals %f\n" , Diameter);
    printf("Circumference equals %f\n" , Circumference);
    printf("Area equals %f\n" , Area);
    return 0;

}