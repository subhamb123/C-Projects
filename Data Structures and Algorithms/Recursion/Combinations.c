#include<stdio.h>
#include<stdlib.h>

int pascalComb(int n, int r){
    if(n==r || r==0)
        return 1;
    return pascalComb(n-1, r-1) + pascalComb(n-1, r);
}

int main(){
    printf("5C3 = %d \n", pascalComb(5, 3));
    return 0;
}
