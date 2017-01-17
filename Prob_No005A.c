#include <stdio.h>

int main(void) {
	int a, m, d, n, i;
	long long sum;

	scanf("%d %d %d %d", &a, &m, &d, &n); //시작값 곱할값 더할값 몇번째인지	
	sum = a;
	for(i = 0; i < n-1; i++) {
		sum = sum*m + d;
	}
	printf("%lld", sum);

	return 0;
}