#include <gmp.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc != 2) {
    fprintf(stderr, "Insert a number to see its factorial.\n");
    return 1;
  }
  mpz_t number;
  mpz_init(number);
  mpz_set_ui(number, atoi(argv[1]));
  for (int i = atoi(argv[1]) - 1; i > 1; i--) {
    mpz_mul_ui(number, number, i);
  }

  gmp_printf("%Zd\n", number);
  mpz_clear(number);
  return 0;
}
