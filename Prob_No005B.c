#include <stdio.h>

int main(void) {
	int day;
	int a, b, c; //방문주기
	scanf("%d %d %d", &a, &b, &c);

	for(day = 1; ; day++) {
		if(day%a == 0 && day%b == 0 && day%c == 0)
			break;
	}
	printf("%d", day);

	return 0;
}