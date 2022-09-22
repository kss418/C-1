#include <stdio.h>

int main() {
	for (int i = 4; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = 0; j < (4 - i) * 2 + 1;j++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}