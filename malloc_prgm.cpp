#include <stdlib.h>
#include <stdio.h>
int main()
{
int *pointer;
pointer = (int*) malloc(5 * sizeof(*pointer));
    if (pointer != NULL) {
      *(pointer + 5) = 480;
      printf("Value of the 6th integer is %d",*(pointer + 5));
    }
}
