#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef unsigned int uint;
typedef unsigned char uchar;

double pick(uchar door, uchar choice) { return door == choice ? 1:0; }

uchar Reveal(uchar door, uchar choice) { return door == choice ? ((choice + 1)%3) : (6 - door - choice); }

uchar switchdoors(uchar reveal, uchar door){ return (6-reveal-door);}

int main(int argc, char *argv)
{
	uint NumberTries, i;
	uchar door, reveal, choice;
	double Strat1, Strat2;
	Strat1 = 0;
	Strat2 = 0;

	srand(time(NULL));
	scanf("%d", &NumberTries);

	for(i = 0; i < NumberTries; i++)
	{
		door = rand() % 3;
		choice = rand() % 3;
	
		//Strategy 1 Test
		Strat1 += pick(door, choice);

		//Strategy 2 Test
		reveal = Reveal(door, choice); 			


	}



	printf("Tactic 1: %f\n", (Strat1/NumberTries));

	return 0;
}
