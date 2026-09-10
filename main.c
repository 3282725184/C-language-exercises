#include <stdio.h>
#include <stdbool.h>
int main ()
{
    char a = 'b';
    a = 'c';
    printf("char = %c\n" , a);
    printf("data = %b" , a);
    
    return 0;
}