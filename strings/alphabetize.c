#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
  if(argv[1] == NULL) {
    printf("%s\n", "No input detected.");
    return 1;
  }

  char words[20][100];
  short word_count = 0;
  bool sorted = false;
  char saved_word[100];

  while (word_count < 20 && argv[word_count + 1] != NULL) {
    strcpy(words[word_count], argv[word_count + 1]);
    word_count++;
  }

  while(!sorted) {
    sorted = true;

    for (short idx = 0; idx < word_count - 1; idx++) {
      if(strcmp(words[idx + 1], words[idx]) < 0) {
        strcpy(saved_word, words[idx]);
        strcpy(words[idx], words[idx + 1]);
        strcpy(words[idx + 1], saved_word);
        sorted = false;
      }
    }
  }

  for (short idx = 0; idx < word_count; idx++) {
    printf("%s\n", words[idx]);
  }

  return 0;
}
