#include <stdio.h>

int main(void) {
	int n, i;
	int sum = 0;

	scanf("%d", &n);
	for(i = 1; ; i++) {
		sum += i;
		if(sum >= n)
			break;
	}
	printf("%d", sum);

	return 0;
}