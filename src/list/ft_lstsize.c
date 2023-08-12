#include "../../inc/list.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*temp;

	count = 1;
	temp = lst;
	if (!lst)
		return (0);
	while (temp->next != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
