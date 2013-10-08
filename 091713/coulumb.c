#include <stdio.h>

#define ARG_MIN 1

int main(int argc, char **argv)
{
	if(argc < ARG_MIN)
	{
		printf("Error: Requires More Argument\n");
		return 1;
	}

	int mass_1, mass_2;
	float posn_1x, posn_1y, posn_2x, posn_2y;

	return 0;
}
