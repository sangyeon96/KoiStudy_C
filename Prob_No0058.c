#include <stdio.h>

int main(void) {
	int a, d, n;
	int i;
	int sum;

	scanf("%d %d %d", &a, &d, &n); //시작값 등차의값 몇번째인지
	sum = a;
	for(i = 0; i < n-1; i++) {
		sum = sum + d;
	}
	printf("%d", sum);

	return 0;
}