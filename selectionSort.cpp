#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}


void selectionSort(int A[], int n){
    int i, j, k;
    for (int i=0; i<n-1;i++){
        for (int j=k=i; j<n; j++){
            if (A[j]<A[k]){
                k=j;
            }
            swap(&A[i], &A[k]);
        }
    }
}


void print(int A[], int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i] << ",";
    }
    cout << endl;
}


int main() {
    int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3}, n = 10;

    cout << "Before sort" << endl;
    print(A, n);

    selectionSort(A, n);

    cout << "After sort" << endl;
    print(A, n);

    return 0;
}

