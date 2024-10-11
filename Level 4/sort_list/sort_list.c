#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *start;
	int tmp;

	start = lst;
	if (!lst || !cmp)
		return (lst);
	while(lst && lst->next)
	{
		if (!cmp(lst->data, lst->next->data))
		{
			tmp = lst->next->data;
			lst->next->data = lst->data;
			lst->data = tmp;
			lst = start;
		}
		else
			lst = lst->next;
	}
	return(start);
}