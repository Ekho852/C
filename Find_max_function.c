#include <stdio.h>

int maximum(int x, int y, int z);

int main(void)
{   
    int number1;
    int number2;
    int number3;

    printf("Enter number1 ");
    scanf("%d", &number1);
    printf("Enter number2 ");
    scanf("%d", &number2);
    printf("Enter number3 ");
    scanf("%d", &number3);
    
    printf("Maximum is: %d\n", maximum( number1, number2, number3));
    
    return 0;
}

int maximum(int x, int y, int z)
{
    int max = x;

    if (y > max) {
        max = y;
    }
    if (z > max) {
        max = z;
    }

    return max;
}