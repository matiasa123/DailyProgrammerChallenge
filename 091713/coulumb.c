#include <stdio.h>

#define ARG_MIN 1

int main(int argc, char **argv)
{
	if(argc <= ARG_MIN)
	{
		printf("Error: Requires More Argument\n");
		return 1;
	}

	int mass_1, mass_2;
	float posn_1x, posn_1y, posn_2x, posn_2y;

	if(argc == 2)
	{
		FILE *fr;

		//printf("Argument 1: %s\n",argv[1]);
		fr = fopen(argv[1], "r+");

		printf("Opening %s\n", argv[1]);

		rewind(fr);

		fscanf(fr, "%d %f %f\n", mass_1, posn_1x, posn_1y);	
		fscanf(fr, "%d %f %f", mass_2, posn_2x, posn_2y);	

		fclose(fr);

		printf("Mass1: %d Mass2: %d\n", mass_1, mass_2);
		printf("(x_1, y_1): ( %d,%d)  ", posn_1x, posn_1y);
		printf("(x_2, y_2): ( %d,%d)\n", posn_2x, posn_2y);
	}
	/**else if(argc == 6)
	{
	}**/

	return 0;
}
