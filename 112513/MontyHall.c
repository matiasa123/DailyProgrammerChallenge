#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef unsigned int uint;
typedef unsigned char uchar;

double pick(uchar door, uchar choice) { return door == choice ? 1:0; }

uchar Reveal(uchar door, uchar choice) { return door == choice ? ((choice + 1)%3) : (6 - door - choice); }

uchar switchdoors(uchar reveal, uchar choice){ return (6-reveal-choice);}

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
		choice = switchdoors(reveal, choice);
		Strat2 += pick(door, choice);

	}



	printf("Tactic 1: %f\n", (Strat1/NumberTries));
	printf("Tactic 2: %f\n", (Strat2/NumberTries));

	return 0;
}
