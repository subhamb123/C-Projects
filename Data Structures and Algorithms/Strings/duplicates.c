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

    return 0;
}
