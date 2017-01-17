#include <stdio.h>

int main(void) {
	int n; //출석 부른 횟수
	int num, i;

	scanf("%d", &n);
	int list[10000] = { };
	for(i = 0; i < n; i++) {
		scanf("%d", &num);
		list[i] = num;
	}

	for(i = n-1; i >= 0; i--) {
		printf("%d ", list[i]);
	}

	return 0;
}