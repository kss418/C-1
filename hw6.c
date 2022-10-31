#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
    printf("Please input five integers: ");
    int num;
    int odd[5], even[5];
    int odd_cnt = 0, even_cnt = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num);
        if (num % 2) {
            odd[odd_cnt] = num;
            odd_cnt++;
        }
        else {
            even[even_cnt] = num;
            even_cnt++;
        }
    }

    printf("Odd numbers: ");
    for (int i = 0; i < odd_cnt; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    printf("Even numbers: ");
    for (int i = 0; i < even_cnt; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    

    
}

