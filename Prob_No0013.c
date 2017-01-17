#include <stdio.h>

int main(void) {
	int y, m, d, g, a, c;
	scanf("%2d%2d%2d-%2d%4d%1d", &y, &m, &d, &g, &a, &c);
	printf("%02d%02d%02d%02d%04d%01d", y, m, d, g, a, c);

	return 0;
}