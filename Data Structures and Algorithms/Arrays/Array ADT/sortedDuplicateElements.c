#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    int A[10] = {1, 7, 7, 7, 10, 12, 12, 12, 12, 15};
    int hashTable[16] = {0};
    int length = 10;
    int hashLength = 15;
    int lastDuplicate = 0;
    int duplicate = 0;

    for(int i = 0; i < length; i++){
        if(A[i] == A[i+1] && A[i] != lastDuplicate){
            duplicate++;
            printf("%d ", A[i]);
            lastDuplicate = A[i];
        }
    }

    printf("%s\n", duplicate > 0 ? (duplicate == 1 ? "is duplicate." : "are duplicate.") : "There are no duplicates.");

    /*
    //Method 1
    for(int i = 0; i < length-1; i++){
        if(A[i] == A[i+1]){
            int j = i+1;
            while(A[j] == A[i])
                j++;
            printf("%d is appearing %d times.\n", A[i], j-i);
            i = j-1;
        }
    }
    */
    //Method 2
    for(int i = 0; i < length; i++){
        hashTable[A[i]]++;
    }
    for(int i = 0; i <= hashLength; i++){
        if(hashTable[i] > 1)
            printf("%d is appearing %d times.\n", i, hashTable[i]);
    }

    return 0;
}
