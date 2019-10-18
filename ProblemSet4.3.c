#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 FILE *fp;

  // Open text file as read mode
  fp = fopen("LoremIpsum.txt", "r");

  // Check to make sure file exists
  if(fp == NULL){
    printf("File cannot be opened or does not exist.\n");
    return 1;
  }

  char asciiValue[127]; 
  int i;

  for(i=0;i<127;i++){
    asciiValue[i] = 0;
   
  }

  int j;

  while((j =fgetc(fp)) != EOF){

  asciiValue[j]++;
  }
  
  for(i=0;i<127;i++){
  printf("%c appeared %d times.\n", i, asciiValue[i]);
}
  //Close opened file
  if(fp) fclose(fp);

    return 0;
}