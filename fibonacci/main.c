#include <gmp.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv) {
  if (argc != 2) {
    fprintf(stderr, "Insert the amount of steps in the fibonacci sequence.\n");
    return 1;
  }
  mpz_t a, b, c;
  mpz_init(a);
  mpz_set_ui(a, 1);
  mpz_init(b);
  mpz_init(c);
  for (int i = 0; i < atoi(argv[1]); i++) {
    mpz_set(b, a);
    mpz_set(a, c);
    mpz_add(c, a, b);
  }
  gmp_printf("%Zd\n", c);
  mpz_clear(a);
  mpz_clear(b);
  mpz_clear(c);
  return 0;
}
