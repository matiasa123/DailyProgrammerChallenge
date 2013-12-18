#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, d, di, bu;

	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

	di = sqrt(((c-a) * (c-a))+((d-b)*(d-b)));

	if(di >=2)
	{
		bu = 2 * M_PI;
	}
	else
	{
		bu = 2 * (M_PI-acos(di/2)) + sin(2*acos(di/2));
	}
	
	printf("%.4lf\n", bu);
}
