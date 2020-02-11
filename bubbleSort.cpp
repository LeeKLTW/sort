#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}


void bubbleSort(int A[], int n) {
    int flag = 0;
    for (int i = 0; i < n - 1; i++) {
        flag = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                swap(&A[j], &A[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
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

    bubbleSort(A, n);

    cout << "After sort" << endl;
    print(A, n);

    return 0;
}

