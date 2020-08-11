#include<stdio.h>
#include<stdlib.h>

int main(){
    int *A, n, ch, x, i, j;
    printf("Enter dimension and case (#1 #2)\n");
    scanf("%d%d", &n, &ch);
    A = (int *)malloc(n*sizeof(int));

    switch(ch){
    case 1:
        for(i = 1; i <= n; i++){
            scanf("%d", &A[i-1]);
            break;
        }
    case 2:
        printf("Enter indexes");
        scanf("%d%d", &i, &j);
        if(i == j)
            printf("%d", A[i-1]);
        else
            printf("0");
    case 3:
        printf("Enter row, column, and element");
        scanf("%d%d%d", &i, &j, &x);
        if(i>=j)
            A[i*(i-1)/2+j-1] = x;
        break;
    case 4:
        for(i = 1; i <= n; i++){
            for(j = 1; j <= n; j++){
                if(i>=j)
                    printf("%d ", A[i*(i-1)/2+j-1]);
                else
                    printf("0 ");
            }
        }
    }
    printf("\n");

    return 0;
}
