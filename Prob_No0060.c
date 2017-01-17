#include <stdio.h>

int main(void) {
	int i, j, x, y;
	int n;
	int board[20][20] = { };

	for(i = 1; i <= 19; i++) {
		for(j = 1; j <= 19; j++) {
			scanf("%d ", &board[i][j]);
		}
	}//바둑판 입력받음

	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		for(j=1; j <= 19; j++) { //가로줄 0->1
			if(board[x][j] == 0)
				board[x][j] = 1;
			else
				board[x][j] = 0;
		}

		for(j=1; j <= 19; j++) { //세로줄 0->1
			if(board[j][y] == 0)
				board[j][y] = 1;
			else
				board[j][y] = 0;
		}
	}

	for(i = 1; i <= 19; i++) {
		for(j = 1; j <= 19; j++) {
			printf("%d ", board[i][j]);
		}
	}//바둑판 출력

	return 0;
}