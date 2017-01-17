#include <stdio.h>

int main(void) {
	int count;
	int n;

	scanf("%d", &count);
	reload:
	scanf("%d", &n);
	printf("%d\n", n);
	
	count--;
	if(count != 0) goto reload;

	return 0;
}