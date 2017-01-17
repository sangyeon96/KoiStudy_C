#include <stdio.h>

int main(void) {
	int n;

	do {
		scanf("%d", &n);
		if(n != 0)
			printf("%d\n", n);
	} while(n != 0);

	return 0;
}