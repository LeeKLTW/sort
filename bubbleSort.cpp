#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;



int main(){
    int A[] = {11,13,7,12,16,9,24,5,10,3}, n =10, i;
    bubbleSort(A, n);
    for(int i=0; i<n; i++){
        cout<<A[i]<<",";
    }
    cout << endl;
    return 0;
}

