//GDB useful things :D
// To start a program in gcc compile it w/ the -g flag. This will produce debugging information which gdb can use.
// Once compied, run > gdb program.out.
// Input 'start' to start the program. A temporary breakpoint will be automatically added to the first line of main().
// Input 'list' prints out 5 lines above and below the current break line.
// 'Ctrl + x + a' or 'tui enable/disable' enters the tui (text user interface).
//    The TUI may get a little broken on print statements.
//    'Ctrl + l' will repaint the screen.
//     Up/Down arrow moves the viewport not the commands. 'Ctrl + p' and 'Ctrl + n' do this.
// Input 'next' moves execution to the next line.
// Input 'b main' will break on the main function. Input 'b 9' will break on line 9.
// Input 'p foo' prints the varibale saved at the symbol foo.
// Input allows running python script with input 'python'.
//     gdb.breakpoints() returns so something like >python print(gdb.breakpoints()[0].location) will print the location of the first breakpoint
//     This can also be user to read things like variables.

#include <stdio.h>
#include <stdlib.h>

long find_factorial(long input);

int main(int argc, char const *argv[]) {
  const char *cmd_ln_input = argv[2];
  long input;
  long factorial;
  char *foo;

  // if(cmd_ln_input == NULL) {
  //   printf("Please enter a number for factorial calculation >");
  //   scanf("%ld\n", &input);
  // }
  // else {
    input = strtol(cmd_ln_input, &foo, 10);
  // }

  // factorial = find_factorial(input);
  input = find_factorial(input);

  printf("The factorial of %ld is %ld\n", input, factorial);
  return 0;
}

long find_factorial(const long input) {
  if(input == 1) {
    return 1;
  } else {
    return input * find_factorial(input);
  }
}
