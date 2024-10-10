typedef struct	s_point
{
	int	x;
	int	y;
}			t_point;

#include <stdlib.h>
#include <stdio.h>


void	fill(char **tab, t_point size, int x, int y, char target_char)
{
	if (x < 0 || x >= size.x || y < 0 || y >= size.y)
		return ;
	if (tab[y][x] != target_char)
		return ;
	tab[y][x] = 'F';
	fill(tab, size, x + 1, y, target_char);
	fill(tab, size, x - 1, y, target_char);
	fill(tab, size, x, y + 1, target_char);
	fill(tab, size, x, y - 1, target_char);
	
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	char	target_char;

	target_char = tab[begin.y][begin.x];

	if (target_char == 'F')
		return ;
	fill(tab, size, begin.x, begin.y, target_char);
}