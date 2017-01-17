#include <stdio.h>

int main(void) {
	unsigned int a, b;
	scanf("%d %d", &a, &b);

	printf("%u\n", a+b);
	printf("%u\n", a-b);
	printf("%lld\n", (long long)a*b);
	printf("%u\n", a/b);
	printf("%u\n", a%b);
	printf("%.2f", (float)a/b);

	return 0;
}