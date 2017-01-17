#include <stdio.h>

int main(void) {
	int board[10][10] = { };
	int x, y, i;

	for(x=0; x<10; x++) {
		for(y=0; y<10; y++){
			scanf("%d", &board[x][y]);
		}
	}

	x=1, y=1; //x는 행이고 y는 열이다

	for(i = 0; i < 15; i++) { //최대15(가로8+세로8-겹치는부분1) 움직일 수 있다.
		board[x][y] = 9;
		if(board[x][y+1] == 1) { 
			x++; //다음 열이 1이면 행++
		}
		else if(board[x][y+1] != 1) {
			y++; //다음 열이 1이 아니면 열++
		}
		if(board[x][y] == 2) { //먹이를 찾으면
			board[x][y] = 9;
			break;
		}
	}

	//출력
	for(x=0; x<10; x++){
		for(y=0; y<10; y++){
			printf("%d ", board[x][y]);
		}
		printf("\n");
	}

	return 0;
}