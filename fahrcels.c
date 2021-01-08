#include <stdio.h>

/* print Fahrentheit-Celcius table
 * for fahr = -40, 20, ..., 300 */
 
 int main()
 {
     int fahr, celsius;
     int lower, upper, step;
     
                    /* assignment statements */
     lower = -40;   /* lower limit of temperature scale */
     upper = 300;   /* upper limit */
     step = 2;      /* step size */
     
     fahr = lower;  /* initialize to lower limit */
     printf(" °F      °C\n");
     while(fahr <= upper) {
         celsius = 5 * (fahr - 32) / 9;
         
         printf("%d\t%d\n", fahr, celsius);
         fahr = fahr + step;
     }
 }
