int		max(int* tab, unsigned int len)
{
	int				max;
	unsigned int	i;

	if (len == 0)
		return (0);
	i = 0;
	max = tab[i++];
	while(i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}