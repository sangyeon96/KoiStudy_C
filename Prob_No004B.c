#include <stdio.h>

int main(void) {
	char ch;
	char alphabet = 'a';

	scanf("%c", &ch);
	do {
		printf("%c ", alphabet);
		alphabet++;
	} while(alphabet <= ch);

	return 0;
}