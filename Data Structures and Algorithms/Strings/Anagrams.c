#include<stdio.h>
#include<stdlib.h>

int main(){
    char x[] = "decimal";
    char y[] = "medical";
    int i = 0, hashTable[26] = {0};

    for(i = 0; x[i] != '\0'; i++)
        hashTable[x[i]-97]++;

    for(i = 0; y[i] != '\0'; i++){
        hashTable[x[i]-97]--;
        if(hashTable[x[i]-97] < 0){
            printf("%s and %s aren't anagrams of each other.", x, y);
            break;
        }
    }

    if(y[i] == '\0')
        printf("%s and %s are anagrams of each other.", x, y);
    return 0;
}
