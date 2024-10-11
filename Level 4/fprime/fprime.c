#include <unistd.h>
#include <stdlib.h>

int	is_prime(int nbr)
{
	int i;
	
	if (nbr < 2)
		return (0);
	i = 2;
	while (i * i <= nbr)
	{
		if (!(nbr % i))
			return (0);
		i++;
	}
	return (1);
}

void	prt_nbr(int nbr)
{
	char	digit;

	if (nbr > 9)
		prt_nbr(nbr / 10);
	digit  = nbr % 10 + '0';
	write (1, &digit, 1);
}

int main (int argc, char **argv)
{
	int	i;
	int	nbr;
	int flag;

	i = 2;
	flag = 0;
	if (argc == 2)
	{
		nbr = atoi(argv[1]);
		while (i * i <= nbr)
		{
			if (is_prime(i))
			{
				if (!(nbr % i))
				{
					if (flag)
						write (1, "*", 1);
					prt_nbr(i);
					flag = 1;
					nbr /=i;
				} 
			}
			if (nbr % i)
				i++;
		}
		if (nbr > 1)
		{
			if (flag)
				write(1, "*", 1);
			prt_nbr(nbr);
		}
	}
	write(1, "\n", 1);
	return (0);
}

