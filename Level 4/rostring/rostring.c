#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int start;
	int end;
	int flag;

	i = 0;
	start = 0;
	end = 0;
	flag = 0;
	if (argc >= 2)
	{
		while (argv[1][i])
		{
			while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
				i++;
			start = i;
			while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
				i++;
			end = i;
			while (argv[1][i])
			{
				while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
					i++;
				if (flag)
					write (1, " ", 1);
				while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
				{
					write (1, &argv[1][i], 1);
					flag = 1;
					i++;
				}
			}
		}
	if (argv[1][i - 1] != ' ' && argv[1][i - 1] != '\t' && flag)
		write (1, " ", 1);
	while (start < end)
	{
		write (1, &argv[1][start], 1);
		start++;
	}
	}
	write (1, "\n", 1);
	return (0);
}