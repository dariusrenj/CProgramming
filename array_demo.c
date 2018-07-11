#include <stdio.h>

int main(void)
{
    int myIntArray [10] = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    float myFloatArray [5] = {1, 2, 3, 4 ,5};
    char myCharArray [256] = {0};

    printf("%d\n", myIntArray[2]);
    printf("%f\n", myFloatArray[2]);
    printf("%c\n", myCharArray[2]);

    int i = 0;
    myIntArray[i] = ((i+1)*10);
    i++;
    myIntArray[i] = ((i+1)*10);
    i++;
    myIntArray[i] = ((i+1)*10);
    i++;
    myIntArray[i] = ((i+1)*10);
    i++;
    myIntArray[i] = ((i+1)*10);
    i++;
    myIntArray[i] = ((i+1)*10);
    i++;
    myIntArray[i] = ((i+1)*10);
    i++;
    myIntArray[i] = ((i+1)*10);
    i++;
    myIntArray[i] = ((i+1)*10);
    i++;
    myIntArray[i] = ((i+1)*10);
    i++;
    myIntArray[i] = ((i+1)*10);

    int i2 = 0;
    myFloatArray[i2] = (i2*1.1);
    i2++;
    myFloatArray[i2] = (i2*1.1);
    i2++;
    myFloatArray[i2] = (i2*1.1);
    i2++;
    myFloatArray[i2] = (i2*1.1);
    i2++;
    myFloatArray[i2] = (i2*1.1);

    int i3 = 0;
    myCharArray[i3] = 'V';
    i3++;
    myCharArray[i3] = 'E';
    i3++;
    myCharArray[i3] = 'R';
    i3++;
    myCharArray[i3] = 'I';
    i3++;
    myCharArray[i3] = 'N';
    i3++;
    myCharArray[i3] = 'G';

    printf("%d\n", myIntArray[2]);
    printf("%f\n", myFloatArray[2]);
    printf("%c\n", myCharArray[2]);

    return 0;

}