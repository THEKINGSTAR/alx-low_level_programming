#include <stdio.h>
/**
*
*
*
*/
typedef struct strc_test
{
	int num ;
	char * str;

	strc_test *NODE;
}


/**
*
*
* MIAN : READ THE CODE
*
*/

int main(int argc , char ** argv)
{
  int x;

  x = 900;

  int *px;

  px = &x;

  printf("%d\n", *(px));

  return (0);
}
