#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{

/*	testing(); */

    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    n = binary_to_uint("");
    printf("%u\n", n);

    n = binary_to_uint("10101010");
    printf("%u\n", n);

    n = binary_to_uint("100112885011");
    printf("%u\n", n);

    n = binary_to_uint("1001111111111111000000000000000001111111111111111100000000111");
    printf("%u\n", n);

    printf("new Testing\n");

     n = binary_to_uint("0");
     printf("%u\n", n);
     
     n = binary_to_uint("1");
     printf("%u\n", n);






    return (0);
}
/*
 * julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
 * julien@ubuntu:~/0x14. Binary$ ./a
 * 1
 * 5
 * 0
 * 98
 * 402
 * julien@ubuntu:~/0x14. Binary$
 *
 * */
