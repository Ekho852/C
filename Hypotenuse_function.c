#include <stdio.h>
#include <math.h>

double hypotenuse(double hypotenuse)
{
    //Pythogoras thereom function where Hypotenuse = sqrt(side1^2 + side2^2)
    hypotenuse = sqrt(pow(8.0, 2) + pow(15, 2));

    return hypotenuse;

}

int main()
{
    printf("The length of the hypotenuse is %.1f", hypotenuse(1));
    return 0;
}