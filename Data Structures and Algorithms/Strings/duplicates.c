#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    //Method 1
    char x[] = "bookkeeper";
    int hashTable[26] = {0};
    for(int i = 0; i < strlen(x); i++)
        hashTable[x[i] - 97]++;

    puts(x);
    for(int i = 0; i < 26; i++){
        if(hashTable[i] > 1)
            printf("%c appeared %d times.\n", i+97, hashTable[i]);
    }

    //Method 2
    /*
    char x[] = "bookkeeper";
    long int a = 0, b = 0;

    puts(x);
    for(int i = 0; x[i] != '\0'; i++){
        b = 1;
        b = b << x[i] - 97;
        if(b&a > 0)
            printf("%c is duplicate.", x[i]);
        else
            a = b|a;
    }
    */
    return 0;
}
