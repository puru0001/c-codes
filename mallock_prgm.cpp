#include <stdlib.h>
#include <stdio.h>
int main()
{
int *pointer;
pointer = (int*) malloc(5 * sizeof(*pointer));
    if (pointer != NULL) {
      *(pointer + 1) = 10;
      *(pointer + 2) = 40;
      *(pointer + 3) = 50;
      *(pointer + 4) = 70;
      printf("Value of the 1st integer is %d\n",*(pointer + 1));
      printf("Value of the 2nd integer is %d\n",*(pointer + 2));
      printf("Value of the 3rd integer is %d\n",*(pointer + 3));
      printf("Value of the 4th integer is %d  ",*(pointer + 4));
    }
}
