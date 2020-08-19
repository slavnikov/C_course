#include <stdio.h>

int main(int argc, char const *argv[]) {
  short primes[100] = {2};

  for (short candidate = 3; candidate < 100; candidate += 2) {
    short final_primes_index;

    for (short primes_idx = 0; primes[primes_idx] != 0; primes_idx++) {
      if(candidate % primes[primes_idx] == 0) {
        goto not_a_prime;
      }
      final_primes_index = primes_idx;
    }

    primes[final_primes_index + 1] = candidate;
    not_a_prime : continue;
  }

  for (short i = 0; primes[i] != 0; i++) {
    printf("%d\n", primes[i]);
  }

  return 0;
}
