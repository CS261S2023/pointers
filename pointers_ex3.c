#include <stdio.h>

int main() {
  int i = 1;
  int *p = &i;
  printf("i = %d, p = %p\n",i, p);
  i = i+100;
  printf("i = %d, p = %p\n",i, p);  
  return 0;
}
