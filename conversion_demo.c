#include <stdio.h>

int main(void)
{
    int integer = 47;
    float single_precision = 2.353;
    double double_precision = 7.234393774309865;
    char single_char = 'Z';

    printf("\nYour int: %d cast to a float: %f \n", integer, (float) integer);
    printf("Your int: %d cast to a char: %c \n", integer, (char) integer);
    printf("Your float: %.3f cast to a double: %lf \n", single_precision, (double) single_precision);
    printf("Your double: %.15lf cast to a float %f \n", double_precision, (float) double_precision);
    printf("Your char: %c cast to an int: %d \n", single_char, (int) single_char);
    printf("33 cast to a char: %c \n\n", (char) 33);

    return 0;
}