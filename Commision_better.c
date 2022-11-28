#include <stdio.h>

int main()
{
      float sales = 0;
      int counter = 1;
      float maxSales = 0;

      while (counter <= 10) /* loop 10 times */
      {
            printf("Enter sales for salesperson %d: ", counter);
            scanf("%f", &sales);
            /*300 base salary + 7% commission of sales*/
            printf("Salary for salesperson %d is €%.2f\n", counter, 300 + sales * 0.07);
            if (sales > maxSales) {
                maxSales = sales;
            }
            counter++;
      }
      printf("\nMost Sales of the week = €%.2f\n", maxSales);
      return 0;
}
