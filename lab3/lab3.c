#include <stdio.h>
#include <math.h>
#include "Sort3.h"


int main()
{
    int i = 0;
    int A[] = {2,45,65,6,3,7,9,12,14};
    int M[] = {6,3,8,65,12,9};
    int L[] = {0,34,6,3,2,8,1};
    int n = (sizeof(A)/ sizeof(A[0]));
    int m = (sizeof(M)/ sizeof(M[0]));
    int l = (sizeof(L)/ sizeof(L[0]));
    printf("Enter 1 for Bubble sort, 2 for Insertion sort,"
           " 3 for Selection sort,4 for exit\n");
    int res=0;
    while (res !=4) {
        scanf("%i", &res);
        if (res == 4)
            break;
        switch (res) {
            case 1:
                printf("Bubble sort\n");
                for (i = 0; i < n; i++)
                    printf("%i ", A[i]);
                printf("----> ");
                Bublesort(A, n);
                break;
            case 2:
                printf("Insertion sort\n");
                for (i = 0; i < m; i++)
                    printf("%i ", M[i]);
                printf("----> ");
                Insertsort(M, m);
                break;
            case 3:
                printf("Selection sort\n");
                for (i = 0; i < l; i++)
                    printf("%i ", L[i]);
                printf("----> ");
                Selectionsort(L, l);
                break;
            default:
                printf("Invalid, enter correct value");
        }
    }
    return 0;
}