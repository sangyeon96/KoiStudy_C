#include <stdio.h>

int main(void) {
	int a, b, c;
	long long sum;
	double average;

	scanf("%d %d %d", &a, &b, &c);

	sum = (long long)a+b+c;
	printf("%lld\n", sum);

	average = (double)sum/3;
	printf("%.1f", average);

	return 0;
}