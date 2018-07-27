#include <stdio.h>

int main(void)
{
	int myIntArray[10] = { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100 };
	float myFloatArray[5] = { 1, 2, 3, 4 ,5 };
	char myCharArray[256] = { 0 };

	printf("%d\n", myIntArray[2]);
	printf("%f\n", myFloatArray[2]);
	printf("%c\n", myCharArray[2]);

	//original array demo lab
	/*myIntArray[i] = ((i + 1) * 10);
	i++;
	myIntArray[i] = ((i + 1) * 10);
	i++;
	myIntArray[i] = ((i + 1) * 10);
	i++;
	myIntArray[i] = ((i + 1) * 10);
	i++;
	myIntArray[i] = ((i + 1) * 10);
	i++;
	myIntArray[i] = ((i + 1) * 10);
	i++;
	myIntArray[i] = ((i + 1) * 10);
	i++;
	myIntArray[i] = ((i + 1) * 10);
	i++;
	myIntArray[i] = ((i + 1) * 10);
	i++;
	myIntArray[i] = ((i + 1) * 10);
	i++;
	myIntArray[i] = ((i + 1) * 10);*/

	for (int i = 0; i < 10; i++)
	{
		myIntArray[i] = ((i + 1) * 10);
		printf("%d\n", myIntArray[i]);
	}

	
	//original array demo lab
	/*myFloatArray[i2] = (i2*1.1);
	i2++;
	myFloatArray[i2] = (i2*1.1);
	i2++;
	myFloatArray[i2] = (i2*1.1);
	i2++;
	myFloatArray[i2] = (i2*1.1);
	i2++;
	myFloatArray[i2] = (i2*1.1);*/
	for (int i2 = 0; i2 < 5; i2++)
	{
		myFloatArray[i2] = (i2*1.1);
		printf("%f\n", myFloatArray[i2]);
	}

	
	//original array demo lab
	/*myCharArray[i3] = 'V';
	i3++;
	myCharArray[i3] = 'E';
	i3++;
	myCharArray[i3] = 'R';
	i3++;
	myCharArray[i3] = 'I';
	i3++;
	myCharArray[i3] = 'N';
	i3++;
	myCharArray[i3] = 'G';*/
	for (int i3 = 0; i3 < 255; i3++)
	{
		switch (i3)
		{
			case 0:
				myCharArray[i3] = 'V';
			case 1:
				myCharArray[i3] = 'E';
			case 2:
				myCharArray[i3] = 'R';
			case 3:
				myCharArray[i3] = 'I';
			case 4:
				myCharArray[i3] = 'N';
			case 5:
				myCharArray[i3] = 'G';
			default:
				break;
		}
	}


	while (1);
	return 0;

}