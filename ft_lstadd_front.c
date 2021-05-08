#include "libft.h"

void	ft_lstadd_front(t_list **list, t_list *new)
{
	if (list)
	{
		if (*list)
			new->next = *list;
		*list = new;
	}
}
