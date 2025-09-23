/**
 * Euclidian Algorithm
 *
 * The Euclidean algorithm (also called Euclid's algorithm) is an
 * algorithm to determine the greatest common divisor of two integers.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gcd(int a, int b) {
  int r = 0;
  while (b != 0) {
    r = b;
    b = b % a;
    a = r;
  }
  return a;
}

int main(int argc, char* argv[]) {
    if (argc <= 2) {
        return -1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int result = gcd(a, b);

    printf("%d\n", result);

    return 0;
}
