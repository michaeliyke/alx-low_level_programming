#include <stdio.h>

int main(void)
{ 
  char c;
  int i;
  double d;

  printf("The size of a char is: %lu \n", (unsigned long)sizeof(c));
  printf("The size of a int is: %lu \n", (unsigned long)sizeof(i));
  printf("The size of a doube is: %lu \n", (unsigned long)sizeof(d));
  
  return (0);
}
