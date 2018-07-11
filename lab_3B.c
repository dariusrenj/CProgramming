/*  lab_3B.c
    Author: Zackery Vering
    Date: 11 July 2018
*/

#include <stdio.h>

int main(void)
{
    //initialize and zeroize string
    char phrase [256] = {0};

    //assign values to string
    phrase[0] = 'U';
    phrase[1] = 'n';
    phrase[2] = 'd';
    phrase[3] = 'e';
    phrase[4] = 'a';
    phrase[5] = 'd';
    phrase[6] = ' ';
    phrase[7] = 'p';
    phrase[8] = 'u';
    phrase[9] = 'p';
    phrase[10] = 'p';
    phrase[11] = 'i';
    phrase[12] = 'e';
    phrase[13] = 's';
    phrase[14] = '!';
    phrase[15] = '\n';
    //explicitly end with null
    phrase[16] = '\0';

    //print string
    printf(phrase);

    return 0;

}