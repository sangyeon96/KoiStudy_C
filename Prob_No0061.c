#include <stdio.h>

int main(void) {
	int i, j;
	int h, w, n, l, d, x, y;
	int board[101][101] = { };

	scanf("%d %d", &h, &w); //세로 가로
	scanf("%d", &n); //막대의 개수
	for(i = 0; i < n; i++) {
		scanf("%d %d %d %d", &l, &d, &x, &y);
		for(j = 0; j < l; j++) {
			if(d == 0) { //가로
				if(board[x][y+j] == 0)
					board[x][y+j] = 1;
				else
					board[x][y+j] = 0;
			}
			else if(d==1) { //세로
				if(board[x+j][y] == 0)
					board[x+j][y] = 1;
				else
					board[x+j][y] = 0;
			}
		}
	}
	
	//출력
	for(i = 1; i <= h; i++) {
		for(j = 1; j <= w; j++) {
			printf("%d ", board[i][j]);
		}
		printf("\n");
	}

	return 0;
}