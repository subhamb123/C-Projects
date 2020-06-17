#include<stdio.h>
#include<stdlib.h>

double basic(int x, int n){
    static double p = 1,f = 1;
    double r;

    if(n == 0)
        return 1;
    r = basic(x,n-1);
    p = p*x;
    f = f*n;
    return r+p/f;
}

double horner(int x, int n){
    static double s;
    if(n == 0)
        return s;
    s = 1+x*s/n;
    return horner(x,n-1);
}

double iterative(int x, int n){
    double s = 1;
    int i;
    double num = 1;
    double den = 1;

    for(i = 1; i <= n; i++){
    num *= x;
    den *= i;
    s += num/den;
    }
    return s;
}

int main(){
    printf("Normal Taylor Series: %f \n", basic(4,15));
    printf("Horner's Rule: %f \n", horner(4,15));
    printf("Iterative: %f \n", iterative(4,15));
    return 0;
}
