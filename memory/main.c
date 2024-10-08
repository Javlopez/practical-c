#include <stdio.h>
#include <stdlib.h>
#include "dynamic_array.h"


int main() {
    int n, newSize;
    printf("Enter initial size of array: ");
    scanf("%d", &n);
    createArray(n);

    fillArray();
    printf("Enter new size of array: ");
    scanf("%d", &newSize);
    resizeArray(newSize);



    fillArray();

    printArray();

    freeArray();

    return 0;

}

int main1(void) {
  int *container;
  int size,i;

  printf("Enter size of elements: ");
  scanf("%d",&size);

  container = (int *)malloc(size * sizeof(int));

  if (container == NULL) {
      printf("Memory allocation failed\n");
      return 1;
  }

    printf("Enter %d elements: \n", size);
    for (i = 0; i < size; i++) {
        scanf("%d",&container[i]);
    }
    printf("the numbers are:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", container[i]);
    }
    printf("\n");


    free(container);

    return 0;
}