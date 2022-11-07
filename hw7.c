#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print(int* arr) {
	for (int i = 0; i < 6; i++) {
		printf("%d ", *(arr + i));
	}
	printf("\n");
	return;
}


int main() {
	int arr1[6] = { 1,2,3,4,5,6 }, arr2[6] = { 7,8,9,10,11,12 };
	int* ptr1 = arr1;
	int* ptr2 = arr2;

	printf("arr1: ");
	print(ptr1);
	printf("arr2: ");
	print(ptr2);
	printf("\n");

	int* temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("after swap\n");
	printf("arr1: ");
	print(ptr1);
	printf("arr2: ");
	print(ptr2);


	return 0;
}
