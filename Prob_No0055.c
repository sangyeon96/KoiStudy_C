#include <stdio.h>

int main(void) {
	long long w, h, b;
	long double space, result;

	scanf("%lld %lld %lld", &w, &h, &b);

	space = w*h*b;
	result = space/(8*1024*1024);
	printf("%.2Lf MB", result);

	return 0;
}