#include<stdio.h>
#include<stdlib.h>

int power(int m, int n){
    if(n == 0){
        return 1;
    }
    return power(m, n-1) * m;
}

int effPower(int m, int n){
    if(n == 0){
        return 1;
    }
    else if(n%2 == 0){
        return effPower(m*m, n/2);
    }
    return effPower(m*m, (n-1)/2) * m;
}

int main() {
    printf("%d\nMore efficient function: %d", power(2, 9), effPower(2, 9));
    return 0;
}
