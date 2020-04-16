#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
    int a[10], b, size;
    int newArray[10], even;

    printf("Size of array\n");
    scanf("%d", &size);

    for(b = 0; b<size; b++){
        scanf("%d", &a[b]);
    }

    printf("Even numbers\n");
    for(b = 0; b<size; b++){
        if( a[b] % 2 == 0 ){
            printf("%d,", a[b]);
        }
        else{
            newArray[even] = a[b];
            even++;
        }
    }

    printf("Odd numbers\n");
    for(b = 0; b<even; b++){
        printf("%d,", newArray[b]);
    }
    return 0;
}
