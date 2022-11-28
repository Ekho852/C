#include <stdio.h>

int main()

{   //assign variables 
    int dB; 
    float loudness;
    
    // set for loop
    for (dB = 81, loudness = 125893000; dB>=0; dB-=3, loudness/=2)
    {
        // print for loop output
        printf("Alarm clock volume is %ddB," , dB);
        printf(" loudness is %.1f times more powerful than near-total silence\n", loudness);
    }
    return 0;
}