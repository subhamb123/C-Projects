#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//Version 2 implements dictionary attack, checks against a list of commonly used passwords, and lets user play multiple times.

int main() {
    while(true){
        char password[50] = "";
        char guess[50] = "";
        int guesses = 0;
        bool x = true, isSame = true, y = false, playAgain = true;
        char response[1] = "";
        char yes[1] = "y";

        FILE * fPointer;
        fPointer = fopen("Passwords.txt", "r");
        char line[50] = "";

        puts("Enter an alphanumeric password that is less than 50 characters long.");
        gets(password);

        int length = 0;
        for(length; password[length] != '\0'; length++){

        }

        while(!feof(fPointer)){
            fgets(line, 50, fPointer);
            for(int i = 0; i < length; i++){
                if(password[i] != line[i]){
                    isSame = false;
                    break;
                }
            }

            if(isSame){
                y = true;
                printf("It took 1 attempt to crack your simple password: %s", password);
                fclose(fPointer);
                break;
            }
            isSame = true;
        }

        fclose(fPointer);

        while(y == false){
            for(int i = 0; i < length; i++){
                int number = rand() % 3;
                if(number == 0){
                    int num = (rand() % 10) + 48;
                    guess[i] = num;
                }
                else if(number == 1){
                    int num = (rand() % 26) + 65;
                    guess[i] = num;
                }
                else{
                    int num = (rand() % 26) + 97;
                    guess[i] = num;
                }
            }
            for(int i = 0; i < length; i++){
                if(password[i] != guess[i]){
                    x = false;
                    break;
                }
            }
            if(x == false){
                guesses++;
                x = true;
            }
            else
                break;
        }
        if(y == false)
            printf("It took %d attempts to crack this password: %s", guesses, guess);

        printf("\nWould you like to try another password? (y/n)");
        gets(response);
        for (int i = 0; i < strlen(response); i++){
            if(response[i] != yes[i])
                playAgain = false;
        }
        if(playAgain == false)
            break;
    }
    return 0;
}
