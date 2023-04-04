/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 19:24:17 by dreijans      #+#    #+#                 */
/*   Updated: 2023/03/22 11:30:30 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_check(t_piece *list)
{
	t_piece	*temp;

	temp = list;
	while (temp->next)
	{
		if (temp->value < temp->next->value)
			temp = temp->next;
		else
			return (0);
	}
	return (1);
}

void	indexing(t_piece *list)
{
	t_piece	*temp;
	t_piece	*start;
	int		i;
	int		listlen;

	i = 0;
	temp = list;
	start = list;
	listlen = list_length(list);
	while (i < listlen)
	{
		start = list;
		while (start->next)
		{
			if (temp->value > start->next->value && start->next->index == -1)
				temp = start->next;
			else if (temp->index != -1)
				temp = start->next;
			start = start->next;
		}
		if (temp->index == -1)
			temp->index = i;
			temp = list;
		i++;
	}
}

void	print_list(t_piece *list)
{
	while (list)
	{
		printf("value[%d], index[%i]\n", list->value, list->index);
		list = list->next;
	}
}

int	check_and_assemble(char **strings, t_piece *a, t_piece *new)
{
	int	i;

	i = 0;
	if (!check_duplicates(strings))
		return (printf("ERROR duplicate found\n"), 3);
	while (strings[i] != NULL)
	{	
		if (!digit_check(strings[i]))
			return (printf("ERROR invalid input\n"), 2);
		if (strings[1] == NULL)
			return (0);
		new = new_node(strings[i]);
		lstadd_back(&a, new);
		i++;
	}
	if (sort_check(a))
		return (printf("ERROR list already sorted\n"), 4);
	indexing(a);
	return (0);
}
