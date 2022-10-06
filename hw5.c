#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void bin(int n) {
	if (n == 1) {
		printf("%d",1);
		return;
	}

	bin(n / 2);
	printf("%d",n%2);
}

int main() {
	int n;
	scanf("%d", &n);
	bin(n);

	return 0;
}