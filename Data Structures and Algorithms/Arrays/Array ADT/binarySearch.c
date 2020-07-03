#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 10;
    int length = 8;
    int value = 8;
    bool x = false;

    int l = 0;
    int mid = 0;
    int h = length - 1;
    while(l<=h){
        mid = (l + h) / 2;
        if(value==A[mid]){
            printf("The index your value is at is %d", mid);
            x = true;
        }
        else if(value<A[mid])
            h=mid-1;
        else
            l=mid+1;
    }

    if (x == false)
        printf("Your value isn't in the array.\n");

    for(int i = 0; i < length; i++){
        printf("%d ", A[i]);
    }
    return 0;
}
