#include <stdio.h>
#include <stdlib.h>
#include "Komb.h"

int main() {
    size_t n = 0;
    int N, M, res = 0;
    printf("Enter 1 for permutation, 2 for combination, 3 for exit \n");
    while (res != 3) {
        scanf("%i", &res);
        switch (res) {
            case 1:
                while (1) {
                    printf("Enter number of elements:\n");
                    scanf("%i", &n);
                    int A[n];
                    printf("Enter element: ");
                    for (int i = 0; i < n; i++)
                        scanf("%d", &A[i]);
                    qsort(A, n, sizeof(int), cmp);
                    do {
                        for (int i = 0; i < n; i++)
                            printf("%d ", A[i]);
                        printf("\n");
                    } while (GenP(A, n));
                    break;
                }
                break;
            case 2:
                printf("Enter number of elements: ");
                scanf("%i", &N);
                printf("Enter number of elements in combinations : ");
                scanf("%i", &M);
                int B[M];
                int m = 1;
                for (int i = 0; i < M; i++) {
                    B[i] = m;
                    m++;
                }
                printf("\n");
                for (int j = 0; j < M; j++) {
                    printf("%i ", B[j]);
                }
                printf("\n");
                for (int i = 0; i < 14; i++) {
                    GenC(B, N, M);
                    for (int j = 0; j < M; j++) {
                        printf("%i ", B[j]);
                    }
                    printf("\n");
                }
                break;
        }
    }
}