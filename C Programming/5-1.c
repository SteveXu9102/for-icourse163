//圆锥

#include <stdio.h>
#include <math.h>
#define pi 3.14

double AoS(double r, double h);

double Vol(double r, double h);

int main() {
	double r, h;
	scanf("%lf%lf", &r, &h);
	printf("radius=%lf, height=%lf, Area of surface=%lf, Volume=%lf\n", r, h, AoS(r, h), Vol(r, h));
	return 0;
}

double AoS(double r, double h) {
	return (double)0.5 * sqrt(r * r + h * h) * 2 * pi * r + pi * r * r;
}

double Vol(double r, double h) {
	return (double)(h * pi * r * r) / 3;
}
