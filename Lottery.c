#include <stdio.h>

int main()

{   //assign variables 
    int start, end, count, increment, i;

    printf("enter start number ");
    scanf("%d", &start);

    printf("enter end number ");
    scanf("%d", &end);

    printf("enter number count ");
    scanf("%d", &count);

    increment = end / count;

    // set for loop
    for (i = start; i <= end; i+=increment)
    {
        // print for loop output
        printf("%d " , i);

    }

    return 0;
}