#include <stdio.h>
#include <stdbool.h>

typedef unsigned int uint;
float a = 3.14,c;

int main ()
{

    int b = 0;
    uint x = 10;
    x = 12;
    b = (int)a;
    c = (float)b;
    printf("data1 = %f\n" , a); 
    printf("data2 = %d\n" , b);  
    printf("data3 = %f\n" , c);   
    printf("data4 = %d\n" , x);   
    return 0;
}