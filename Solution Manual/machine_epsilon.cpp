#include <stdio.h>
#include <float.h>

int main(void) {
  printf("%a\n", FLT_MAX);
  printf("FLT_MAX is 0x1.fffffep+127 therefore machine epsilon must be:\n");
  printf("           0x0.000002p0 that is approx %e in decimal\n", 0x0.000002p0);
}