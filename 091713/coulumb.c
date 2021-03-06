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
	float dist, Force;
	int i;

	for(i = 0; i < 2; i++)
	{
		scanf("%f %f %f", &_p[i].mass, &_p[i].x, &_p[i].y);
	}


	dist = distance(&_p[0], &_p[1]);	
	Force = ((_p[0].mass * _p[1].mass)/(dist * dist));

	printf("%.4f\n", Force);

	return 0;
}
