#include <stdio.h>

#define BASE 100
#define NUMBERCOUNT 1000

int main( int argc, char* argv[] )
{
	//Variables Initialized
	int digit1, digit2, total, totalNumber, count;
	int TornNumber[NUMBERCOUNT];

	count = 0;

	//Find the Numbers that meet the definition of torn number
	for(digit1 = 0; digit1 < BASE;digit1++)
	{
		for(digit2 = 0; digit2 < BASE; digit2++)
		{
			totalNumber = (digit1 * BASE) + digit2;
			
			int sum;
			sum = (digit1 + digit2);
			total = sum * sum;	

			if(totalNumber == total)
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
