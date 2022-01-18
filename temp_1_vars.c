#include <stdio.h>
#include <limits.h>

int main()
{
    int number = 2;
    printf("Number = %d \n", number);
    printf("%02d%%  \n", number);
    
    printf("INT_MIN = %d \n", INT_MIN);
    printf("INT_MAX = %d \n", INT_MAX);


    char c ='d';
    float f = -2.1345;
    double d = 3.45;
    
    printf("Float = %.2f \n", f);
    

    return 0;
}
