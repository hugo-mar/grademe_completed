#include <unistd.h>

int mini_atoi(char *str)
{
	int	nbr;
	int	i;

	nbr = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (nbr);
}

void mini_putnbr(int nbr)
{
	char digit;

	if (nbr >= 10)
		mini_putnbr (nbr / 10);
	digit = (nbr % 10) + '0';
	write (1, &digit, 1);
}

int main (int argc, char **argv)
{
	int i;
	(void)argv;

	i = 1;
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (i <= 9)
	{
		mini_putnbr(i);
		write (1, " x ", 3);
		mini_putnbr(mini_atoi(argv[1]));
		write (1, " = ", 3);
		mini_putnbr(i * mini_atoi(argv[1]));
		write(1, "\n", 1);
		i++;
	}
	return(0);
}