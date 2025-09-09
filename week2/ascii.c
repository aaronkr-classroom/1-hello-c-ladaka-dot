
#include <stdio.h>

int main(void) {
	char x = 72;
	char y = 105;
	char z = 33;

	printf("ASCII %d+%d+%d = %c+%c+%c", x, y, z, x, y, z);
	
	char a = 'a';
	char b = a + 1;

	printf("\n%c + 1 = %c", a, b);

	printf("\n\nASCII 문자는 순서대로 출력하기:");
	for (int i = 85; i <= 105; i = i++) {
		printf("\nASCII:%d=%c",i,i);
		}

	return 0;
}