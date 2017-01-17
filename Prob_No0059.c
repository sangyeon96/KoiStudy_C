#include <stdio.h>

int main(void) {
	int a, r, n;
	int i;
	long long sum;

	scanf("%d %d %d", &a, &r, &n); //시작값 등비 몇번째인지
	sum = a;
	for(i = 0; i < n-1; i++) {
		sum = sum*r;
	}
	printf("%lld", sum);

	return 0;
}