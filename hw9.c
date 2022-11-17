#include <stdio.h>
#include <string.h>



int main() {
	char string[100];
	fgets(string, sizeof(string), stdin);
	
	for (int i = 0; i < strlen(string); i++) {
		if (string[i] >= 97 && string[i] <= 122) {
			printf("%c", string[i] - 32);
		}
		else if (string[i] >= 65 && string[i] <= 90) {
			printf("%c", string[i] + 32);
		}
		else {
			printf("%c", string[i]);
		}
	}





	return 0;
}
