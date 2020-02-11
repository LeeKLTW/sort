#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


void insertionSort(int A[], int n){
    int j, x;
    for(int i=1; i<n; i++){
         j = i-1;
         x = A[i];
         while(j>-1 && A[j]> x){
             A[j+1] = A[j];
             j--;
         }
         A[j+1]=x;
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

    insertionSort(A, n);

    cout << "After sort" << endl;
    print(A, n);

    return 0;
}
