#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int my_strlen(const char string[]);
void my_strcat(char dst_str[], const char src_str[]);
bool my_strcmp(const char str1[], const char str2[]);

int main(int argc, char *argv[]) {
  char *input = argv[1];
  if(input == NULL) {
    printf("%s\n", "No input detected.");
    return 0;
  }

  printf("\n");
  printf("The input is \"%s\".\n", input);

  int str_length = strlen(input);
  int myf_length = my_strlen(input);

  printf("Standard answer is: %d\n", str_length);
  printf("My answer is: %d\n", myf_length);
  printf("The function 'my_strlen' %s\n", str_length == myf_length ? "worked!" : "did not work :(");

  char dst_str1[13] = "Hello";
  char dst_str2[13] = "Hello";
  char src_str[] = " World!";
  strcat(dst_str1, src_str);
  my_strcat(dst_str2, src_str);

  printf("\n");
  printf("Standard concat output is: %s\n", dst_str1);
  printf("My concat output is: %s\n", dst_str2);
  printf("The function 'my_strcat' %s\n", strcmp(dst_str1, dst_str2) == 0 ? "worked!" : "did not work :(");

  char foo1[] = "foo";
  char foo2[] = "foo";
  char bar[] = "bar";
  bool comp3 = my_strcmp(foo1, foo2);
  bool comp4 = my_strcmp(foo1, bar);

  printf("\n");
  printf("The function 'my_strcomp' %s\n", comp3 && !comp4 ? "worked!" : "did not work :(");

  return 0;
}

int my_strlen(const char string[]) {
  int length = 0;

  while(string[length] != '\0') {
    length++;
  }

  return length;
}

void my_strcat(char dst_str[], const char src_str[]) {
  int dst_idx = my_strlen(dst_str);
  int src_idx = 0;

  while(src_str[src_idx] != '\0') {
    dst_str[dst_idx] = src_str[src_idx];
    dst_idx++;
    src_idx++;
  }
  dst_str[dst_idx] = '\0';
}

bool my_strcmp(const char str1[], const char str2[]) {
  int idx = 0;

  while(true) {
    if(str1[idx] != str2[idx]) {
      return false;
    } else if (str1[idx] == '\0') {
      return true;
    } else {
      idx++;
    }
  }
}
