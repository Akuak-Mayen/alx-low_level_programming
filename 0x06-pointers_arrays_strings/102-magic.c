#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /* My line of code */
  printf("a[2] = %d\n", *(int *)((char *)p + 20));
  /* End of my code */
  return (0);
}

