#include <stdio.h>
#include <math.h>

int main(void) {

	int num; //다섯자리의 정수
	int index; //각 자리별로 나눈 수
	int result, i;

	scanf("%d", &num);
	for(i = 4; i >= 0; i--) {
		index = num/pow(10, i);
		result = index*pow(10, i);
		printf("[%d]\n", result);
		num -= result;
	}

	return 0;
}