#include <stdio.h>
#include <math.h>

int main(void)
{
    int x = 99;
    int y = 0;
    ///////////////////WRITE EACH RESULT////////////////
    printf("\nx = %d\n", x);
    printf("y = %d\n", y);
    printf("x && y = %d\n", x&&y);//x && y
    printf("x || y = %d\n", x||y);//y || x
    printf("!y = %d\n", (x!y)||(y!y));//!y
    printf("y && 0 = %d\n", y&&0);//y && 0
    printf("x || 42 = %d\n", x&&y);//x || 42
    printf("!x = %d\n", (x!x)||(y!x));//!x
    printf("x && x = %d\n", x&&x);//x && x
    printf("y || y = %d\n", y||y);//y || y
    printf("!1 = %d\n", (x!1)||(y!1));//!1
    printf("1 && 1 = %d\n", 1&&1);//1 && 1
    printf("0 && 1 || 2 && 3 = %d\n", (0&&1)||(2&&3);//(0 && 1) || (2 && 3)        // Bonus
    return 0;
}