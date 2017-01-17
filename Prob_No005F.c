#include <stdio.h>

int main(void) {
	int i, j, x, y;
	int n;
	int board[19][19] = { };

	scanf("%d", &n); //흰돌의 개수
	for(i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		board[x-1][y-1] = 1;
	}
	
	for(i = 0; i < 19; i++) {
		for(j = 0; j < 19; j++) {
			printf("%d ", board[i][j]);
		}
		printf("\n");
	}

	return 0;
}