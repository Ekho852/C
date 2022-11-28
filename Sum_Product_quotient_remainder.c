#include <stdio.h>

int main() {
    int First_Number, Second_Number, Sum, Product, Difference, Quotient, Remainder;
    
    printf("Enter First number: ");
    scanf("%d", &First_Number);
    printf("Enter Second number: ");
    scanf("%d", &Second_Number);

    // Computes Sum
    Sum = First_Number + Second_Number;

    // Computes Product
    Product = First_Number * Second_Number;

    // Computes Product
    Difference = First_Number - Second_Number;
    
    // Computes Quotient
    Quotient = First_Number / Second_Number;

    // Computes Remainder
    Remainder = First_Number % Second_Number;
    
    printf("\nSum = %d\n" , Sum);
    printf("Product = %d\n" , Product);
    printf("Difference = %d\n" , Difference);
    printf("Quotient = %d\n", Quotient);
    printf("Remainder = %d\n", Remainder);
    return 0;
}