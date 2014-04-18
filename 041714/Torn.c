#include <stdio.h>

#define BASE 100
#define NUMBERCOUNT 1000
#define BASE_10 10

int main( int argc, char* argv[] )
{
	//Variables Initialized
	int digit1, digit2, count, totalNumber;
	int TornNumber[NUMBERCOUNT];

	count = 0;

	//Find the Numbers that meet the definition of torn number
	for(digit1 = 0; digit1 < BASE;digit1++)
	{
		for(digit2 = 0; digit2 < BASE; digit2++)
		{
			totalNumber = (digit1 * BASE) + digit2;

			if(Verify(digit1, digit2))
			{
				TornNumber[count++] = totalNumber;
			}			
		}
	}

	// Print the result
	int i;
	for(i = 0; i < count; i++)
	{
		printf("TornNumber[%d]: %d\n", i, TornNumber[i]);
	}

	return 0;
}

char* Digitize(int digit1, int digit2)
{
	char TornNumber[4];

	if(digit1 < BASE_10)
	{
		TornNumber[4] = '0';
		TornNumber[3] = ((char) digit1);
	}

	return NULL;
}

int Verify(int digit1, int digit2)
{
	int total, totalNumber, sum;

	totalNumber = (digit1 * BASE) + digit2;

	sum = (digit1 + digit2);
	total = sum * sum;	


	return (totalNumber == total);
}
