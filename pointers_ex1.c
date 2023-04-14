#include <stdio.h>

int main() {
  char c = 'a';
  char *p = &c;

  printf("p   = %p\n", p);  
  printf("p+1 = %p\n", p+1);  
  printf("p+2 = %p\n", p+2);  

  printf("*(p+2) = '%c'\n", *(p+2));  

  return 0;
}
