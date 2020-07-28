#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char x[] = "racecar";
    char y[] = "racecar";
    int j = strlen(y) - 1;

    for(int i = 0; i < j; i++, j--){
        int temp = x[i];
        x[i] = x[j];
        x[j] = temp;
    }
    printf("%s reversed is %s.", y, x);
    if(strcmp(x, y) == 0)
        printf("\n%s is a palindrome.", y);
    else
        printf("\n%s isn't a palindrome.", y);
    return 0;
}
