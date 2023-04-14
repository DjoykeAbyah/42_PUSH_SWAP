/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 14:50:57 by dreijans      #+#    #+#                 */
/*   Updated: 2023/04/14 20:15:08 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	terminate(void)
{
	ft_putstr_fd("Error\n", 1);
	exit (EXIT_FAILURE);
}

void	free_node(t_piece **lst_a)
{
	t_piece	*temp;

	if (!lst_a)
		return ;
	while (*lst_a != NULL)
	{
		temp = (*lst_a)->next;
		free (*lst_a);
		*lst_a = temp;
	}
}

int	rev_sort_check(t_piece *list)
{
	t_piece	*temp;

	temp = list;
	while (temp->next)
	{
		if (temp->value > temp->next->value)
			temp = temp->next;
		else
			return (0);
	}
	return (1);
}
