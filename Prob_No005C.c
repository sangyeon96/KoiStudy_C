#include <stdio.h>

int main(void) {
	int n; //출석부르는 횟수
	int i, num;
	int list[23] = { };

	scanf("%d", &n);

	for(i = 0; i < n; i++) {
		scanf("%d", &num);
		list[num-1]++;
	}

	for(i = 0; i < 23; i++) {
		printf("%d ", list[i]);
	}

	return 0;
}