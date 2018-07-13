#include <stdio.h>
#include <math.h>

int main(void)
{
    int x = 7;
    int y = 4;
    float z = 0;
    ///////////////////WRITE EACH RESULT////////////////

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("\nx * y = %d\n", x*y);
    printf("%f = x / y\n", (float)x/(float)y);
    printf("x %% y = %d\n", x%y);
    printf("y + x = %d\n", y+x);
    printf("y - x = %d\n", y-x);
    printf("-y = %d\n", -y);
    printf("++x = %d\n", ++x);
    printf("y++ = %d\n", y++);
    printf("x-- = %d\n", x--);
    printf("--y = %d\n", --y);
    printf("1 + 2 * (3 + %d) + 5 = %d\n\n", y, 1+2*(3+y)+5);

    return 0;
}