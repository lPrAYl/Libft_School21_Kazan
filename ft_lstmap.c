#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_elem;
	t_list	*new_list;

	if (lst && f)
	{
		new_elem = ft_lstnew(f(lst->content));
		new_list = new_elem;
		lst = lst->next;
		while (lst)
		{			
			new_elem = ft_lstnew(f(lst->content));
			if (!new_elem)
			{
				ft_lstclear(&new_elem, del);
				return (NULL);
			}
			lst = lst->next;
			ft_lstadd_back(&new_list, new_elem);
		}
		return (new_list);
	}
	return (NULL);
}
