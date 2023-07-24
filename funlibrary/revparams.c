#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;
    int j;

    while (argc >= 1)
    {
        j = 0;
        while (argv[argc + 1][j] != '\0')
        {
            ft_putchar(argv[argc + 1][j]);
            j++;
        }
        ft_putchar('\n');
		argc--;
    }
    return (0);
}
