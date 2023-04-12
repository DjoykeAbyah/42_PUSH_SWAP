/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 14:50:57 by dreijans      #+#    #+#                 */
/*   Updated: 2023/04/12 20:12:11 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	terminate(void)
{
	ft_putstr_fd("Error\n", 1);
	exit (EXIT_FAILURE);
}

void	ft_free_strings_array(char **strings)
{
	int	i;

	i = 0;
	while (strings[i] != NULL)
	{
		free (strings[i]);
		i++;
	}
	free(strings);
}

void	free_node(t_piece **lst_a)
{
	t_piece	*temp;

	if (!lst_a)
		return ;
	temp = (*lst_a)->next;
	while (*lst_a != NULL)
	{
		temp = (*lst_a)->next;
		free (*lst_a);
		*lst_a = temp;
	}
}

void	parsing(char **input, t_piece *a, t_piece *b, t_piece *node)
{
	if argc == 2
	handle strng;
	if argc > 2
	handel argv +1;
}
