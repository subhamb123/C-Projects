#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Array{
    int A[10];
    int size;
    int length;
};

int get(struct Array arr,int index){
    if(index>=0 && index<arr.length)
    return arr.A[index];
    return -1;
}

void set(struct Array *arr,int index,int x){
    if(index>=0 && index<arr->length)
        arr->A[index]=x;
}

int max(struct Array arr){
    int max=arr.A[0];
    int i;
    for(i=1;i<arr.length;i++){
        if(arr.A[i]>max)
            max=arr.A[i];
    }
    return max;
}

int min(struct Array arr){
    int min=arr.A[0];
    int i;
    for(i=1;i<arr.length;i++){
        if(arr.A[i]<min)
            min=arr.A[i];
    }
    return min;
}

int sum(struct Array arr){
    int s=0;
    int i;
    for(i=0;i<arr.length;i++)
        s+=arr.A[i];
    return s;
}

float avg(struct Array arr){
    return (float)sum(arr)/arr.length;
}

int main(){
    struct Array arr = {{2,3,9,16,18,21,28,32,35},10,9};
    printf("Elements are ");
    for(int i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
    printf("\n5th element: %d\n", get(arr, 5));
    set(&arr, 3, 1);
    printf("Max: %d\n", max(arr));
    printf("Min: %d\n", min(arr));
    printf("Sum: %d\n", sum(arr));
    printf("Average: %.2f\n", avg(arr));
    return 0;
}
