#include <stdio.h>
#include <math.h>

double hypotenuse(double x, double y);

double main()
{   
    double side1;
    double side2;

    printf("Enter length of Side 1: ");
    scanf("%lf", &side1);
    printf("\nEnter length of Side 2: ");
    scanf("%lf", &side2);
    
    printf("\nHypotenuse is: %.1f\n", hypotenuse(side1, side2));
    
    return 0;
}

double hypotenuse(double x, double y)
{
    double hypo = sqrt(pow(x, 2) + pow(y, 2));
    return hypo;
}