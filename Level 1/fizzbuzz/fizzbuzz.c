#include <unistd.h>

void	prt_nbr(int nbr)
{
	char	digit;

	if (nbr > 9)
		prt_nbr(nbr / 10);
	digit  = nbr % 10 + '0';
	write (1, &digit, 1);
}

int	main(void)
{
	int i;

	i = 1;
	while(i <= 100)
	{
		if (!(i % 3) && !(i % 5))
			write(1, "fizzbuzz\n", 9);
		else if (!(i % 3))
			write(1, "fizz\n", 5);
		else if (!(i % 5))
			write(1, "buzz\n", 5);
		else
		{
			prt_nbr(i);
			write(1, "\n", 1);
		}
		i++;
	}

	return(0);
}