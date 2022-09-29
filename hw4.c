#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);

	for (int i = 2; i < num; i++) {
		if (num % i) {
			continue;
		}
		printf("It is not a prime number");
		return 0;
	}

	printf("It is a prime number");
	return 0;
}