//
// Created by javier on 10/8/24.
//

#include <stdlib.h>
#include "stdio.h"

#include "dynamic_array.h"

int *array = NULL;
int arraySize = 0;

void createArray(int n) {
    array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation error\n");
        exit(1);
    }

    arraySize = n;
    printf("Array created with %d elements\n", arraySize);
}

void resizeArray(int newSize) {
    array = (int *)realloc(array, newSize * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation error\n");
        exit(1);
    }

    arraySize = newSize;
    printf("Array resized to %d elements\n", arraySize);
}

void fillArray() {
    printf("Enter %d numbers\n", arraySize);
    for (int i = 0; i < arraySize; i++) {
        scanf("%d", &array[i]);
    }
}

void printArray() {
    printf("Array printed\n");
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}


void freeArray() {
    free(array);
    printf("Memory freed\n");
}