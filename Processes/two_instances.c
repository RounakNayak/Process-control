/*
* program to show if you have 2 instances of a program
* they can share the same virtual memory address at the same time, even if the data is different
*/

#include <stdio.h>
#include <stdlib.h>

int val1;
int val2;

int main(int argc, char *argv[]) {
    val1 = atoi(argv[1]);
    val2 = atoi(argv[2]);

    while(1) {
        printf("Val1: %d \t location %p \t Val2: %d \t location %p\n", val1, (void *) & val1, val2, (void *) & val2);
    }

    return 0;
}