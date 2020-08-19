//arrays allow grouping values of the same type
//C arrays are of fixed size
//declaring an array is done by adding a number in square brackets after the variable name
// the above number can be a constant

int main(int argc, char const *argv[]) {
  char fallout[7] = {'f', 'a', 'l', 'l', 'o', 'u', 't'};
  int evens[10] = {[1] = 2, [3] = 4, [5] = 6, [7] = 8, [9] = 10};

  //variable length arrays (don't get your hopes up)
  // these arrays will not change length, but can be declared with a variable as a size
  // these cannot be initialized in their declaration

  float eleven[5*2 + 1];
  
  return 0;
}
