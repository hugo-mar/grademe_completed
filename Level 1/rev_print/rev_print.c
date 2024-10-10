#include <unistd.h>

int	main (int argc, char **argv)
{
	int	x;

	x = 0;
	if (argc == 2)
	{
		while (argv[1][x])
			x++;
		while (--x >= 0)
			write(1, &argv[1][x], 1);
	}
	write (1, "\n", 1);
	return (0);
}