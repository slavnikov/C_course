#include <stdio.h>

#ifndef FOO
#define FOO "foo"
#endif

int main(int argc, char const *argv[]) {
  char bar[] = FOO;
  bar[0] = 'b';
  bar[1] = 'a';
  bar[2] = 'r';

  printf("%s\n", FOO); //=> foo
  printf("%s\n", bar); //=> bar

  const char foo[] = "foo";
  char baz[] = {foo}; // baz gets placed right behind the bar array w/ a length of 1 to allow only for the \0 char
                      // question: why does it get placed right before bar and not foo
  baz[0] = 'b'; // overwrites baz's \0
  baz[1] = 'a'; // overwrites bar's b
  baz[2] = 'z'; // overwrites bar's a

  printf("%s\n", FOO); //=> foo
  printf("%s\n", bar); //=> bar
  printf("%s\n", foo); //=> azo
  printf("%s\n", baz); //=> bazo // ends up highjacking bar's \0 character
  return 0;
}
