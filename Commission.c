#include <stdio.h>

int main(){
    float SalePrs1, Netpay1, SalePrs2, Netpay2, SalePrs3, Netpay3, SalePrs4, Netpay4, SalePrs5, 
    Netpay5, SalePrs6, Netpay6, SalePrs7, Netpay7, SalePrs8, Netpay8, SalePrs9, Netpay9, 
    SalePrs10, Netpay10, Max;
    
    //Sales Person 1
    printf("Enter Sales for Person 1: ");
    scanf("%f", &SalePrs1);
    Netpay1 = 300 + (SalePrs1*0.07);
    printf("Netpay for Salesperson 1 is €%.2f\n ", Netpay1);
    
    if (SalePrs1 > 0){
        Max = SalePrs1;
    }
   
    //Sales Person 2
    printf("\nEnter Sales for Person 2: ");
    scanf("%f", &SalePrs2);
    Netpay2 = 300 + (SalePrs2*0.07);
    printf("Netpay for Salesperson 2 is €%.2f\n ", Netpay2);
   
   if (SalePrs2 > Max){
        Max = SalePrs2;
    }

    //Sales Person 3
    printf("\nEnter Sales for Person 3: ");
    scanf("%f", &SalePrs3);
    Netpay3 = 300 + (SalePrs3*0.07);
    printf("Netpay for Salesperson 3 is €%.2f\n ", Netpay3);
    
    if (SalePrs3 > Max){
        Max = SalePrs3;
    }

    //Sales Person 4
    printf("\nEnter Sales for Person 4: ");
    scanf("%f", &SalePrs4);
    Netpay4 = 300 + (SalePrs4*0.07);
    printf("Netpay for Salesperson 4 is €%.2f\n ", Netpay4);
   
   if (SalePrs4 > Max){
        Max = SalePrs4;
    }

    //Sales Person 5
    printf("\nEnter Sales for Person 5: ");
    scanf("%f", &SalePrs5);
    Netpay5 = 300 + (SalePrs5*0.07);
    printf("Netpay for Salesperson 5 is €%.2f\n ", Netpay5);
   
   if (SalePrs5 > Max){
        Max = SalePrs5;
    }

    //Sales Person 6
    printf("\nEnter Sales for Person 6: ");
    scanf("%f", &SalePrs6);
    Netpay6 = 300 + (SalePrs6*0.07);
    printf("Netpay for Salesperson 6 is €%.2f\n ", Netpay6);
    
    if (SalePrs6 > Max){
        Max = SalePrs6;
    }

    //Sales Person 7
    printf("\nEnter Sales for Person 7: ");
    scanf("%f", &SalePrs7);
    Netpay7 = 300 + (SalePrs7*0.07);
    printf("Netpay for Salesperson 7 is €%.2f\n ", Netpay7);
    
    if (SalePrs7 > Max){
        Max = SalePrs7;
    }

    //Sales Person 8
    printf("\nEnter Sales for Person 8: ");
    scanf("%f", &SalePrs8);
    Netpay8 = 300 + (SalePrs8*0.07);
    printf("Netpay for Salesperson 8 is €%.2f\n ", Netpay8);
   
   if (SalePrs8 > Max){
        Max = SalePrs8;
    }

    //Sales Person 9
    printf("\nEnter Sales for Person 9: ");
    scanf("%f", &SalePrs9);
    Netpay9 = 300 + (SalePrs9*0.07);
    printf("Netpay for Salesperson 9 is €%.2f\n ", Netpay9);

  if (SalePrs9 > Max){
        Max = SalePrs9;
    }

    //Sales Person 10
    printf("\nEnter Sales for Person 10: ");
    scanf("%f", &SalePrs10);
    Netpay10 = 300 + (SalePrs10*0.07);
    printf("Netpay for Salesperson 10 is €%.2f\n ", Netpay10);
    
    if (SalePrs10 > Max){
        Max = SalePrs10;
    }
    
    printf("\nMost Sales of the week = €%.2f", Max);
    return 0;
}