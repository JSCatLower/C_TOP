#include <stdio.h>

int main() {
	printf("Hello, world! 😸\n");
	int x = 42;
	int* ptr = &x;
	printf("Значение перемменой x через указатель: %d", *ptr);
	*ptr = 43;
	printf("Теперь значение x через указатель: %d", *ptr);
	return 0;
}
