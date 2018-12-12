#include <stdio.h>
#include "Sort3.h"

int swap(int *i,int *j)
{
    int tmp = *i;
    *i = *j;
    *j = tmp;
}
void Bublesort(int A[], int n)
{
    int m,j;
    for(m = n -1; m > 0; m = m-1){
        for (j = 0; j < n-1; j++) {
            if (A[j] > A[j + 1]) {
                swap(&A[j], &A[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
        printf("%i ",A[i]);
    printf("\n");
}
void Insertsort(int A[], int n)
{
    int j;
    for (j = 1; j < n; j++) {
        while ((j > 0) && (A[j] < A[j - 1])) {
            swap(&A[j], &A[j - 1]);
            j--;
        }
    }
    for (int i = 0; i < n; i++)
        printf("%i ", A[i]);
    printf("\n");
}
void Selectionsort(int A[], int n)
{
    int k,min,j;
    for (k = 0; k < n-1; k++) {
        min = k;
        for (j = k + 1; j < n; j++) {
            if (A[j] < A[min])
                min = j;
        }
        swap(&A[k], &A[min]);
    }
    for (int i = 0; i < n; i++)
        printf("%i ", A[i]);
    printf("\n");
}