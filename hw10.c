#include <stdio.h>
#include <string.h>

struct city {
	char name[30];
	char country[30];
	int population;
};

void print(city *arr) {
	printf("Printing the three cities:\n");
	for (int i = 0; i <= 2; i++) {
		printf("%d. ", i + 1);
		arr[i].name[strlen(arr[i].name) - 1] = 0;
		fputs(arr[i].name, stdout);
		printf(" in ");
		arr[i].country[strlen(arr[i].country) - 1] = 0;
		fputs(arr[i].country, stdout);
		printf(" with a population of %d people\n", arr[i].population);
	}
}

void input(city *arr) {
	for (int i = 0; i <= 2; i++) {
		printf("Name> ");
		fgets(arr[i].name, sizeof(arr[i].name), stdin);
		printf("Country> ");
		fgets(arr[i].country,sizeof(arr[i].country), stdin);
		printf("Population> ");
		scanf_s("%d", &arr[i].population);
		while (getchar() != '\n');
	}
}

int main() {
	city arr[3];
	input(arr);
	print(arr);

	return 0;
}