#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 10, 15};
    int length = 10;
    /*
    //Method 1
    int hashTable[15];
    int start = 1, end = 15;
    bool missing = false;

    for(int i = 0; i < length; i++){
        hashTable[A[i]]++;
    }

    for(int i = start; i <= end; i++){
        if(hashTable[i] == 0){
            missing = true;
            printf("%d ", i);
        }
    }

    if(missing){
        printf(" are missing.");
    }
    else{
        printf("None are missing.");
    }
    */
    //Method 2
    int diff = A[0];
    for(int i = 0; i < length; i++){
        if(A[i] - i != diff){
            while(diff < A[i] - i){
                printf("%d ", i+diff);
                diff++;
            }
        }
    }
    return 0;
}
