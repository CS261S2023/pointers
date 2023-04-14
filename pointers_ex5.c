#include <stdio.h>

int main() {
  int i = 1;
  int *p = &i;
  printf("i = %d, *p = %d, p = %p\n",i, *p, p);
  p = p+100; // off set pointer by 100, 400 bytes
  printf("i = %d, *p = %d, p = %p\n",i, *p, p);
  return 0;
}
