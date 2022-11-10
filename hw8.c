#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double sd(int* arr) {
	double avg = 0;
	for (int i = 0; i < 5; i++) {
		avg += *(arr + 4 * i);
	}
	avg /= 5;

	double deviation = 0;
	for (int i = 0; i < 5; i++) {
		deviation += (*(arr + 4 * i) - avg) * (*(arr + 4 * i) - avg);
	}
	deviation /= 5;

	return sqrt(deviation);
}


int main(){
	int arr[5];
	printf("Enter 5 real numbers: ");
	scanf("%d %d %d %d %d", arr, arr + 4, arr + 8, arr + 12, arr + 16);
	printf("Standard Deviation = %.3f", sd(arr));


	return 0;
}
