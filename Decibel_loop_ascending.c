#include <stdio.h>

int main()

{   //assign variables 
    int dB, loudness; 
    
    // set for loop
    for (dB = 0, loudness = 1; dB<=80; dB+=10, loudness*=10)
    {
        // print for loop output
        printf("Alarm clock volume is %ddB," , dB);
        printf(" loudness is %d times more powerful than near-total silence\n", loudness);
    }
    return 0;
}