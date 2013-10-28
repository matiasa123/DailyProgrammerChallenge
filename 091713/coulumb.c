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

	return 0;
}
