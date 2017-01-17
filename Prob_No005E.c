#include <stdio.h>

int main(void) {
	int n; //출석 부른 횟수
	int num, i, j, min_id;
	int list[10000] = { };

	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", &num);
		list[i] = num;
	}

	for(i = 0; i < n; i++) {
		min_id = i;
		for(j = 0; j < n; j++) {
			if(list[j] < list[min_id]) {
				min_id = j;
			}
		}
	}
	printf("%d", list[min_id]);

	return 0;
}