#include <stdio.h>
#include <math.h>

#define ARG_MIN 1

typedef struct particle
{
	float x,y;
	float mass;
} Particle;

static float distance(Particle *a, Particle *b)
{
	float dx,dy;
	dx = a->x - b->x, dy = a->y - b->y;

	return sqrtf((dx*dx) + (dy*dy));
}

int main(int argc, char **argv)
{
	Particle _p[2];
	float distance;
	int i;

	for(i = 0; i < 2; i++)
	{
		scanf("%f %f %f", &_p[i].mass, &_p[i].x, &_p[i].y);
	}


	/**
	printf("particle1 mass: %f particle1 x: %f particle1 y: %f\n", _p[0].mass, _p[0].x, _p[0].y);
	printf("particle2 mass: %f particle2 x: %f particle2 y: %f\n", _p[1].mass, _p[1].x, _p[1].y);
	**/

	return 0;
}
