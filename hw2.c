#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
double dist;

int main() {
	printf("Please enter kilometers: ");
	scanf("%f", &dist);
	printf("%.1f km is equal to %.1f miles", dist, dist / 1.609);

	return 0;
}
