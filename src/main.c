#include <stdio.h>

int main() {
	printf("Hello, world! 😸\n");
	int x = 42;
	int* ptr = &x;
	printf("Значение перемменой x через указатель: %d\n", *ptr);
	*ptr = 43;
	printf("Теперь значение x через указатель: %d\n", *ptr);
	return 0;
}
