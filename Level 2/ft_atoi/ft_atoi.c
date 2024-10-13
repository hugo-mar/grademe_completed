#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	long	nbr;
	int		parity;

	nbr = 0;
	parity = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	return (nbr * parity);
	if (nbr >= INT_MIN && nbr <= INT_MAX)
		return (nbr * parity);
	else
		return (0);
}