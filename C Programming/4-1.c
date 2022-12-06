#include <stdio.h>
#include <math.h>

int main()
{
	double s = 0, m, t = 1;
	long sgn = 1, n = 1;
	scanf("%lf", &m);
	
	do
	{
		t *= m / n;
		s += sgn * t;
		sgn *= -1;
		n += 1;
	} while (t >= 1e-4);
	
	printf("%.2lf\n", s);
	
	return 0;
}