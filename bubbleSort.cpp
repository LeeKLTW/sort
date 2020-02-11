#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;



void bubbleSort(int A[], int n){
    int i,j,flag=0;
    for(i=0; i<n-1; i++){
        flag = 0;
        for (j=0; j<n-i-1;j++){
            if (A[j]>A[j+1]){
                swap(&A[j], &A[j+1]);
                flag =1;
            }
        }
        if (flag==0){
            break;
        }
    }
}


int main(){
    int A[] = {11,13,7,12,16,9,24,5,10,3}, n =10, i;
    bubbleSort(A, n);
    for(int i=0; i<n; i++){
        cout<<A[i]<<",";
    }
    cout << endl;
    return 0;
}

