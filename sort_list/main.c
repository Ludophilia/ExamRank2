#include "personal_list.h"

t_list	*lst_before_node(t_list *head, t_list *target)
{
	if (head == target)
		return (head);
	while (head)
	{
		if (head->next == target)
			return (head);
		head = head->next;
	}
	return (0);
}

void	print_list(t_list *list)
{
	while (list)
	{
		printf("%i\t", list->data);
		list = list->next;
	}
	printf("\n");
}

int ascending(int a, int b)
{
	return (a <= b);
}

int descending(int a, int b)
{
	return (a >= b);
}

int	main(void)
{
	t_list a, b, c, d;

	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = 0;
	a.data = -150;
	b.data = 456;
	c.data = 2147483647;
	d.data = -150;
	print_list(&a);
	sort_list(&a, descending);
	print_list(&a);
	return (0);
}
