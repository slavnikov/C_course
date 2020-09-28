//CORE DUMPS
// By default, linux has a core dump limit of 0 (>ulimit -c).
// This prevents core dumps from beings saved.
// Setting the limited to be unlimited (>ulimti -c unlimited) raises that limit.
//
// The dumped core can be read w/ gdb (>gdb ./random_crasher.out core)
// This will move the program to the moment when it crashed.
// Input 'bt' will show the call stack and command 'f 3' will select the fourth frame in the stack.
// Input 'infor frame', 'info args', and 'info locals' can be used to read variables in the selected frame.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  int random_num = 0;
  int *good_pointer = malloc(sizeof(int)); // allocates the requested memory and returns a pointer to it
  int *bad_poiinter = NULL;

  srand(time(NULL));
  while(true) {
    random_num = rand() % 255;
    if(random_num == 13) {
      *bad_poiinter = random_num;
    } else {
      *good_pointer = random_num;
    }
    printf("random %d\n", random_num);
    usleep(100); //sleeps for micro (u) seconds
  }
  return 0;
}
