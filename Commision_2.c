#include<stdio.h> 
 
int main(){
    float sales[10];
    int i;
    float most_sales=0;
    int compare;

    for(i=0;i<10;i++)
    {
        printf("Sales of salesperson %f ", i+1);
        scanf("%f", &sales[i]);
    } 
    return 0;

}
