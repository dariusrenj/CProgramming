#include <stdio.h>
#include <math.h>

int main(void)
{
    int x = 2;
    int y = 6;
    ///////////////////WRITE EACH RESULT////////////////
    printf("\nx = %d\n", x);
    printf("y = %d\n", y);
    printf("y < x is %d\n", y<x);     //y < x
    printf("y <= x is %d\n", y<=x);   //y <= x
    printf("y > x is %d\n", y>x);//y > x
    printf("y >= x is %d\n", y>=x);//y >= x
    printf("y == x is %d\n", y==x);//y == x
    printf("y != x is %d\n", y!=x);//y != x
    printf("2 == y is %d\n", 2==y);//2 == y
    printf("6 != x is %d\n", 6!=x);//6 != x
    printf("6 >= 2 is %d\n", y>=x);//6 >= 2
    printf("2 < 6 is %d\n", x<y);//2 < 6
    printf("x != y != 3 >= x is %d\n", x!=y!=3>=x);//x != y != 3 >= x   // Bonus

    return 0;
}