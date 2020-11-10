#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  // malloc returns a void* which necessitates the case (though some compilers will cast automatically)
  // if the system cannot allocate the amount of memory requested, malloc will return NULL
  //    thus comparing to NULL after dynamic allocation is a good idea
  int *hundred_bytes = (int*) malloc(sizeof(100)); // 100 is the number of bytes being allocated
  int *hundred_ints = (int*) malloc(100 * sizeof(int));// allocates enough memory for 100 integers 400 or 800 bytes, depending on the system

  // calloc takes the size of the datatype AND the number of elements needed
  // calloc also initializes the memory (0 in case of ints);
  //
  // char *ten_chars = (char*) calloc(10, sizeof(char));
  // strcpy(ten_chars, "slavnikov\0");
  char hello_world[] = "hello_world";
  char *p = hello_world;
  p = realloc(p, 15);
  strcat(hello_world, ".com");
  printf("%s\n", hello_world);

  // realloc can extend the memory allocated
  // the contents of the original memory segment are preserved

  // allocated memory should be released when the program exits
  // memory leaks happen when it is allocated, but not released before the reference to it is lost (e.g the variable storing the reference goes out of context)
  // after freeing the memory, it may be best to set the pointer to NULL
  free(hundred_bytes);
  free(hundred_ints);
  hundred_bytes = NULL;
  hundred_ints = NULL;
  return 0;
}
