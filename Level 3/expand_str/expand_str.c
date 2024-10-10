#include<unistd.h>

int main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2 && argv[1])
	{
		while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '	'))
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] != ' ' && argv[1][i] != '	')
				write (1, &argv[1][i], 1);
			else
			{
				while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '	'))
					i++;
				if(argv[1][i])
					write (1, "   ", 3);
				i--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}