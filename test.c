#include <stdio.h>
#include <math.h>


// exite programme : gcc test.c -o test -lm


int isArmstrong(int num)
{
	int inputNumb;
	int remainder;
	int n = 0;
	double result = 0;

	inputNumb = num;

	while (inputNumb != 0)
	{
		inputNumb /= 10;
		++n;
	}

	inputNumb = num;
	while (inputNumb != 0)
	{
		remainder = inputNumb % 10;
		result += pow(remainder, n);
		inputNumb /= 10;
	}
	if (result == num)
	{
		return 1; // True
	}
	else
	{
		return 0; // False
	}
}

int main()
{
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	if (isArmstrong(number))
	{
		printf("%d is an Armstrong number.\n (", number);

		int inputNumb = number;
		int n = 0;
		while (inputNumb != 0)
		{
			inputNumb /= 10;
			++n;
		}

		inputNumb = number;
		while (inputNumb != 0)
		{
			int remainder = inputNumb % 10;
			printf("%d^%d", remainder, n);

			inputNumb /= 10;

			if (inputNumb != 0)
			{
				printf(" + ");
			}
		}

		printf(" = %d)\n", number);
	}
	else
	{
		printf("%d is not an Armstrong number.\n", number);
	}

	return 0;
}
