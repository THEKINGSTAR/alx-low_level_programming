#include <stdio.h>

int main(int argc , char ** argv)
{
  int x;

  x = 900;

  int *px;

  px = &x;

  printf("%d\n", *(px));

  return (0);
}
