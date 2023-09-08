#include "personal_list.h"
// #include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*lasts[2];
	t_list	*current[2];
	int		tmp;

	if (lst == 0)
		return (0);
	else if (lst->next == 0)
		return (lst);
	current[0] = lst;
	while (current[0])
	{
		lasts[1] = lst;
		current[1] = lst->next;
		while (current[1])
		{
			lasts[0] = lasts[1];
			lasts[1] = current[1];
			if (cmp(lasts[0]->data, lasts[1]->data) == 0)
			{
				tmp = lasts[0]->data;
				lasts[0]->data = lasts[1]->data;
				lasts[1]->data = tmp;
			}
			current[1] = current[1]->next;
		}
		current[0] = current[0]->next;
	}
	return (lst);
}
