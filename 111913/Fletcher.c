#include <stdio.h>
#include <stdint.h>

//typedef char uint8_t 
//typedef unsigned int uint16_t

uint16_t Fletcher16( uint8_t* data, int count )
{
	uint16_t sum1 = 0;
	uint16_t sum2 = 0;
	int index;

	for( index = 0; index < count; index++)
	{
		sum1 = ((sum1 + data[index]) % 255);
		sum2 = ((sum2 + sum1) % 255);
	}

	return (sum2 << 8) | sum1;
}

int main()
{
	int num = 0;
	int i, j;
	char store[256][256];
	char c;

	scanf("%d\n", &num);
	//printf("%d\n", num);

	for(i = 0; i < num; i++)
	{
		for(j = 0; (c = getchar()) != '\n' && c != EOF; j++)
		{
			store[i][j] = c; 	
		}

		printf("%x\n", Fletcher16(store[i], j));
	}

	return 0;
}
