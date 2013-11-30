#include <stdio.h>
#include <string.h>

void toCamel(char* input, int size_in, char* output)
{
	int k, j;

	for(k = 0, j = 0; k < size_in; k++, j++)
	{
		if(input[k] == ' ')
		{
			output[j] = toupper(input[++k]);
		}
		else
		{
			output[j] = input[k];
		}
	}

	output[j] = '\0';
}

void toSnake(char* input, int size_in, char* output)
{
	int k, j;

	for(k = 0, j = 0; k < size_in; k++, j++)
	{
		if(input[k] == ' ')
		{
			output[j] = '_';
		}
		else
		{
			output[j] = input[k];
		}
	}

	output[j] = '\0';
}

void toUSnake(char* input, int size_in, char* output)
{
	int k, j;

	for(k = 0, j = 0; k < size_in; k++, j++)
	{
		if(input[k] == ' ')
		{
			output[j] = '_';
		}
		else
		{
			output[j] = toupper(input[k]);
		}
	}

	output[j] = '\0';
}

int main(int argc, char* argv)
{
	int format, i;
	char Input[256], Output[256];
	char c;

	scanf("%d\n", &format);

	for(i = 0; (c = getchar()) != '\n' && c != EOF; i++)
	{
		Input[i] = c;
	}

	Input[i] = '\0';

	/** Simple test case for toCamel() **/
	//toCamel(Input, i, Output);

	//printf("%s\n", Output);
	
	/** Simple test case for toSnake() **/
	//toSnake(Input, i, Output);

	//printf("%s\n", Output);
	
	/** Simple test case for toUSnake() **/
	toUSnake(Input, i, Output);

	printf("%s\n", Output);

	/**if(format == 0)
	{
		
	}
	else if(format == 1)
	{
	}
	else if(format == 2)
	{
	}**/

	return 0;
}
