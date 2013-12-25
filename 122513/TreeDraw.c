#include <stdio.h>

short unsigned int isOdd(int x)
{
	if((x % 2) == 1)
		return 1;
	else
		return 0;
}

int main()
{
	char leaf, base;
	short unsigned int layer;

	scanf("%hu %c %c", &layer, &base, &leaf);
	//printf("%d %c %c %d\n", layer, base, leaf, isOdd(layer));
	
	if(layer < 3 || layer > 21)
	{
		printf("Error: layer is not in correct range [3,21].  Please retry with correct integer range input");
		return 1;
	}

	if(isOdd(layer))
	{
		short unsigned int i, j, k;
		
		for(i = 1; i <= layer; i+=2)
		{
			for(k = (i/2); k < (layer/2); k++)
			{	
				printf(" ");
			}
			for(j = 0; j < i; j++)
			{
				printf("%c",leaf);	
			}
			printf("\n");
		}
		
		for(k = 1; k < (layer/2); k++)
		{
			printf(" ");
		}
		for(j = 0; j < 3; j++)
		{
			printf("%c", base);
		}
		printf("\n");
	}
	else
	{
		printf("Error: layer is not odd.  Please retry with odd integer input");
		return 1;
	}
}
