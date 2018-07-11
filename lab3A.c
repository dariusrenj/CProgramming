#include <stdio.h>

int main(void)
{
    int student_age [13] = {32, 24, 30, 27, 23, 35, 34, 32, 28, 29, 24, 32, 36};
    
    printf("\nInstructor's age: %d \n", student_age[0]);

    for (int i = 1; i < 13; i++)
    {
        printf("Student %d's age: %d \n", i, student_age[i]);
    }

    char quote[] = {"I'm\nnot\ndead\nyet!\n"};
    
    printf("\n%s\n", quote);

    return 0;

}