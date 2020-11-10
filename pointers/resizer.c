#include <stdlib.h>
#include <stdio.h>

int add(int x, int** pArr, int size);

int main()
{
    //begin with a size of 10
    int currentsize = 10;
    int* arr = malloc(currentsize * sizeof(int));
    int** pArr = &arr;
    int i;

    //initalize with all elements set to INT_MAX
    for(i = 0; i < currentsize; i++) {
        arr[i] = 0;
    }


    // insert random elements
    for(i = 0; i < 100000; i++) {
        currentsize = add(rand() % 100, pArr, currentsize);
    }

    free(arr);
    return 0;
}

/*
    Method resizes array if needed, and returns the new size of the array
    Also inserts the element into the array
*/
int add(int x, int** pArr, int size)
{
    //find the first available location
    int newSize = size;
    int *arr = *pArr;
    int i;
    for(i = 0; i < size; i++) {
        if (arr[i] == 0)
            break;
    }

    if (i >= size) {
        //need to realloc
        newSize++;
        printf("size:    %i\n", size);
        printf("newSize: %i\n", newSize);
        printf("arr:     %p\n", arr);
        arr = realloc(*pArr, newSize * sizeof(int) );
    }

    arr[i] = x;
    *pArr = arr;

    return newSize;
}
