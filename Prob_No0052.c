#include <stdio.h>

int main(void) {
	int i, n;

	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		if(i%3 == 0)
			printf("X ");
		else
			printf("%d ", i);
	}

	return 0;
}