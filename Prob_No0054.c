#include <stdio.h>

int main(void) {
	long long h, b, c, s;
	long double space;
	long double result;

	scanf("%lld %lld %lld %lld", &h, &b, &c, &s);

	space = h*b*c*s; //bit단위
	result = space/(8*1024*1024); //MB단위
	printf("%.1Lf MB", result);

	return 0;
}