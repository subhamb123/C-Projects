#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main() {
  FILE * fPointer;

      fPointer = fopen("x.txt", "w");
      fprintf(fPointer, "Hi world.");
      fclose(fPointer);


      fPointer = fopen("x.txt", "r");
      char singleLine[150];

      while(!feof(fPointer)){
          fgets(singleLine, 150, fPointer);
          puts(singleLine);
      }

      fclose(fPointer);

      fPointer = fopen("x.txt", "a");
      fprintf(fPointer, "\ndfjskfjdkf");
      fclose(fPointer);

      fPointer = fopen("x.txt", "w+");
      fputs("I ate lots", fPointer);

      fseek(fPointer, 5, SEEK_SET);
      fputs(" you and me", fPointer);

      fseek(fPointer, -2, SEEK_END);
      fputs(" your brother", fPointer);

      fclose(fPointer);
      return 0;
}
