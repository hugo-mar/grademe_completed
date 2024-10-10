#include <unistd.h>

int	main (int argc, char **argv)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			write(1, &argv[1][i], 1);
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				while (j < (argv[1][i] - 'a'))
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				while (j < (argv[1][i] - 'A'))
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			j = 0;
			i++;
		}
	}
	write (1, "\n", 1);
	return(0);
}