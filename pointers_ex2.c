#include <stdio.h>

int main() {
  int a = 1;
  int *p = &a;

  printf("p   = %p\n", p);
  printf("p+1 = %p\n", p+1);
  printf("p+2 = %p\n", p+2);

  printf("*(p+2) = %d\n", *(p+2));
  return 0;
}
