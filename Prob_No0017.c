#include <stdio.h>

int main(void) {

	int i = 0;
	char d[21];
	scanf("%s", d);
	do {
		printf("\'%c\'\n", d[i]);
		i++;
	} while(d[i] != '\0');

	return 0;
}