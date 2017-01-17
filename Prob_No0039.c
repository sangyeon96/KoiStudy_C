#include <stdio.h>

int main(void) {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", (!a^b) && (a!=1));

	return 0;
}