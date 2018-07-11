#include <stdio.h>

int main(void)
{

    /** VARIABLE INITIALIZATION **/
    int lower_limit = -10;  //lowest y value for graph
    int upper_limit = 10;  //highest y value for graph
    float x = 1.0, y = 2.1;

    //holds a person's initials
    char first_init = 'Z', second_init = 'T', third_init = 'V';
    //holds pi
    double pi = 3.14159265359;
    int final_result = 0;

    //print everything
    printf("\n");
    printf("lower limit is %d \n", lower_limit);
    printf("upper limit is %d \n", upper_limit);
    printf("x is %.1f \n", x);
    printf("y is %.1f \n", y);
    printf("first initial is %c \n", first_init);
    printf("second initial is %c \n", second_init);
    printf("third initial is %c \n", third_init);
    printf("full initials are %c%c%c \n", first_init, second_init, third_init);
    printf("pi is %.11f \n", pi);
    printf("final result is %d \n", final_result);
    printf("\n");
    printf("size of lower limit is %d \n", sizeof(lower_limit));
    printf("size of upper limit is %d \n", sizeof(upper_limit));
    printf("size of x is %d \n", sizeof(x));
    printf("size of y is %d \n", sizeof(y));
    printf("size of first initial is %d \n", sizeof(first_init));
    printf("size of second initial is %d \n", sizeof(second_init));
    printf("size of third initial is %d \n", sizeof(third_init));
    printf("size of pi is %d \n", sizeof(pi));
    printf("size of final result is %d \n", sizeof(final_result));
    printf("\n");

    return 0;
}