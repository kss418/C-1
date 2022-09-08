#include <stdio.h>
int num1, num2;

int main() {
	printf("Input two integers: ");
	scanf_s("%d %d", &num1, num2);

	printf("%d & %d = %d", num1, num2, num1 & num2);
	printf("%d | %d = %d", num1, num2, num1 | num2);
	printf("%d ^ %d = %d", num1, num2, num1 ^ num2);

	return 0;
}