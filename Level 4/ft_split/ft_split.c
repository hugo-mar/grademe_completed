#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

static int	count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
				i++;
		}
	}
	return (count);
}

static int	word_size(char *str, int *index)
{
	int size;

	size = 0;
	while (str[*index] && str[*index] != ' ' && str[*index] != '\t' && str[*index] != '\n')
	{
		(*index)++;
		size++;
	}
	return (size);
}

char    **ft_split(char *str)
{
	char 	**split;
	int		n_words;
	int		index;
	int		i;
	int		j;
	int		word_len;

	index = 0;
	i = 0;
	n_words = count_words(str);
	split = malloc (sizeof(char *) * (n_words + 1));
	if (!split)
		return (NULL);
	while (str[index])
	{
		while (str[index] == ' ' || str[index] == '\t' || str[index] == '\n')
			index++;
		if (str[index])
		{
			word_len = word_size(str, &index);
			split[i] = malloc (sizeof(char) * (word_len + 1));
			if (!split[i])
				return (NULL);
			j = 0;
			while (str[index - word_len + j] && j < word_len)
			{
				split[i][j] = str[index - word_len + j];
				j++;
			}
			split[i][j] = '\0';
			i++;
		}
	}
	split[i] = NULL;
	return (split);
}