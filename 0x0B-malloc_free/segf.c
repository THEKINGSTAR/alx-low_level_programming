/**
 * segf - Let's segfault \o/
 *
 * Return: nothing.
 */
void segf(void)
{
    char *str;

    str = "Holberton";
    str[0] = 's';
}

/**
 *  main - concept introduction
 *
 * Return: 0.
 */
int main(void)
{
    segf();
    return (0);
}
