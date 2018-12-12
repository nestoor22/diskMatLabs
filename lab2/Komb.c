#include <stdio.h>
#include <stdlib.h>
#include "Komb.h"

int cmp(const void * x1, const void * x2) {
    return ( *(int*)x1 - *(int*)x2 );
}
void swap(int *A, int i, int j)
{
    int s=A[i];
    A[i]=A[j];
    A[j]=s;
}

int GenP(int *A,int n)
{
    int j=n-2;
    while (j!=-1 && A[j]>=A[j+1]) {
        j--;
    }
    if (j==-1)
    {
        return 0;
    }
    int k=n-1;
    while (A[j]>=A[k]) {
        k--;
    }
    swap(A,j,k);
    int l=j+1;
    int r=n-1;
    while (l<r)
    {
        swap(A,l++,r--);
    }
    return 1;
}
int GenC(int *A, int n, int k)
{
    for (int i=k-1;i>=0;i--)
    {
        if(A[i]!=n-k+i+1)
        {
            A[i]=A[i]+1;
            for(int j=i+1;j<=k-1;j++)
            {
                A[j]=A[j-1]+1;
            }
            return 1;
        }
    }
}
