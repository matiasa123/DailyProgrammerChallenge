#include <stdio.h>
#include <math.h>

int main()
{
	//Initialize Variables
	float theta, s, r, _sin, circum;
	unsigned int n;

	//Take in Input
	scanf("%d %f", &n, &r);

	//Error Handling
	if((n < 3 )|| (n > 100))
	{
		printf("Error: n value is not within range [3, 100]\n");
		return 1;
	}
	if((r < .01 )|| (r > 100.0))
	{
		printf("Error: r value is not within range [.01, 100]\n");
		return 1;
	}

	//Compute the length of each side
	theta = M_PI / n;
	s = (2.0) * r * sin( theta );

	//Compute the Circumference	
	circum = s * n;

	//Print the Output
	printf("%.3f\n", circum);

	return 0;
}
