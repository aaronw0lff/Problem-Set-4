#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
- Create a file named `ProblemSet4.1.c`.
- Write a function named `arrayContains` that checks if a given integer item, 
acquired through `scanf()`, is in an integer array named 
`numbers` with following elements: `{2, 4, 6, 8, 10}`. 
The function should take two arguments: the value gotten from `scanf()` 
and the array to compare the value against. In the function, traverse 
the array and compare each element with the value gotten from `scanf()`. 
If an element is found return `true`. If the array is exhausted, return false.
- Test the function in the `main()` function with `scanf()`.
- Print the result of comparison using `printf()`.
*/

bool arrayContains();

bool arrayContains(int scanvalue, int array[]){
    for(int i=0; i < 5; i++){
        if(array[i]== scanvalue)
            return true;
    }    
return false;
}


int main(int argc, char *argv[])
{
int x, testnum;
int numbers[] = {2, 4, 6, 8, 10};
printf("Enter a number: ");
scanf("%d", &testnum);
x = arrayContains(testnum, numbers);
if(x == 1)
    printf("True\n");


if(x == 0)
    printf("False\n");


}
