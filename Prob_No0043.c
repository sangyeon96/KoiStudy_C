#include <stdio.h>

int main(void) {
	int score;
	scanf("%d", &score);

	if(score>=90 && score<=100)
		printf("A");
	else if(score>=70 && score<90)
		printf("B");
	else if(score>=40 && score<70)
		printf("C");
	else
		printf("D");

	return 0;
}