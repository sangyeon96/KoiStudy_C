#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	if(n < 0)
		printf("minus\n");
	else
		printf("plus\n");

	if(n%2 == 0)
		printf("even\n");
	else
		printf("odd\n");

	return 0;
}