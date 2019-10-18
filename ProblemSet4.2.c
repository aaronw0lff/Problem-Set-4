#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Create a file named ProblemSet4.2.c.
Write a function named removeLastCharacter that removes the last character 
in a given string acquired through fgets(). 
The function should take the string acquired through fgets(). 
Use array indexing to reach the last element and replace it with a NULL. 
The function should not return anything.
Test the function in the main() function with fgets().
Print the resulting string using fputs()
*/

void removeLastCharacter();

void removeLastCharacter(char* string){

    int i = 0;

    while(string[i] != '\0'){
        i++;
       // printf("while: %d is the string index, %c is the char", i, string[i]);
    }
    string[i-1] = '\0';
  }

int main(int argc, char *argv[]){


 // Opening file in C requires FILE type included in stdio.h
  FILE *fp;

  char arr[50], b;
  b = '\0';
    //initializing this array as blank
    for(int j=0; j<50; j++){
      arr[j] = b;
    }
    
  // Open text file as read mode
  fp = fopen("./textlines.txt", "r");





  // Check to make sure file was opened
  if(fp == NULL){
    printf("File cannot be opened.\n");
   return 1; //Return error
  }
  rewind(fp);

/*    for(int i=0; i<5; i++){
        fgets(str, 2, fp);
        printf("-%s\n", str);
    }*/

  //print out blank array
  for(int i=0; i<50; i++){
        printf("%c", arr[i]);
    }
    printf("\n");


  fgets(arr,50,fp);

//print out initial file
    for(int i=0; i<50; i++){
        printf("%c", arr[i]);
    }
    printf("\n");

  removeLastCharacter(arr);

//print out file with last character removed
for(int i=0; i<50; i++){
        printf("%c", arr[i]);
    }
    printf("\n");


FILE *fp2;
  fp2 = fopen("textline.txt", "w");
  fputs(arr, fp2);
  //Close opened file
  if(fp) fclose(fp);
  if(fp2) fclose(fp2);


}
