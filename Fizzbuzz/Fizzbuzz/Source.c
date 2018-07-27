#include <stdio.h>

int main(void)
{
	for (int x = 100; x > 0; x--)
	{
		if (x % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("FizzBuzz\n");
		}
	}


	return 0;
}