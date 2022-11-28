#include <stdio.h>

int num = 0, counter = 0, answer = 1;

int main (void)

{
    printf (" please enter a number to see its factorial : ");
    scanf ("%d", &num);
    counter = num;

    do
    {
        answer *= counter--; /* answer * counter and decrement counter post solution */
        printf("test");
    } while ( counter > 1 );

    printf( "The factorial of %d is : %d", num, answer );
}