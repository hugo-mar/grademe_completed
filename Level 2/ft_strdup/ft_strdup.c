#include <unistd.h>
#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char    *ft_strdup(char *src)
{
	char *dup;
	int	i;

	dup = malloc (sizeof (char*) * (ft_strlen(src) + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup); 
}