/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/13 14:12:24 by dreijans      #+#    #+#                 */
/*   Updated: 2023/04/19 17:22:06 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	digit_check(char *c)
{
	int	i;

	i = 0;
	if (c[i] == '-')
		i++;
	if (!ft_isalnum(c[i]))
		terminate();
	while (c[i] != '\0')
	{
		if (!(c[i] >= '0' && c[i] <= '9'))
			return (0);
		i++;
	}
	if (ft_atoi(c) > 2147483647 || ft_atoi(c) < -2147483648)
		terminate();
	return (1);
}

void	check_duplicates(t_piece *start, t_piece *temp)
{
	if (temp->value == start->next->value)
		terminate();
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

int	parse(char **s, t_piece **a)
{
	t_piece	*new;
	int		i;

	i = 0;
	if (!s)
		terminate();
	while (s[i] != NULL)
	{	
		if (!digit_check(s[i]))
			terminate();
		new = new_node(s[i]);
		lstadd_back(a, new);
		i++;
	}
	if (sort_check(*a))
	{
		free_node(a);
		exit(0);
	}
	indexing(*a);
	return (0);
}
