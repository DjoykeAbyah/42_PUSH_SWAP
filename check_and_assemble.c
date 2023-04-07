/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_and_assemble.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 19:24:17 by dreijans      #+#    #+#                 */
/*   Updated: 2023/04/07 21:08:43 by djoyke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_duplicates(t_piece *start, t_piece *temp)
{
	if (temp->value == start->next->value)
	{
		terminate(1);
	}
}

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

	i = 0;
	temp = list;
	start = list;
	while (i < list_length(list))
	{
		start = list;
		while (start->next)
		{
			check_duplicates(start, temp);
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

void	print_lists(t_piece *list)
{
	if (!list)
		printf("list empty\n");
	while (list)
	{
		printf("value[%d], index[%i]\n", list->value, list->index);
		list = list->next;
	}
}

int	check_and_assemble(char **strings, t_piece **a, t_piece *new)
{
	int	i;

	i = 0;
	while (strings[i] != NULL)
	{	
		if (!digit_check(strings[i]))
			terminate(1);
		if (strings[1] == NULL)
			return (0);
		new = new_node(strings[i]);
		lstadd_back(a, new);
		i++;
	}
	if (sort_check(*a))
		return (0);
	indexing(*a);
	return (0);
}
