#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    int A[10] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int length = 10, sum = 9, hashTable[17] = {0};

    for(int i = 0; i < length; i++){
        printf("%d ", A[i]);
    }

    //Method 1
    for(int i = 0; i < length-1; i++){
        for(int j = i+1; j < length; j++){
            if(A[i] + A[j] == sum){
                printf("\n%d + %d = %d", A[i], A[j], sum);
            }
        }
    }

    /*
    //Method 2
    for(int i = 0; i < length; i++){
        if(hashTable[sum-A[i]] != 0)
            printf("\n%d + %d = %d", A[i], sum - A[i], sum);
        hashTable[A[i]]++;
    }
    */

    return 0;
}
