/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/07 20:42:13 by dreijans      #+#    #+#                 */
/*   Updated: 2023/04/12 17:58:31 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_piece **top_b, t_piece **top_a)
{
	t_piece	*temp_b;
	t_piece	*temp_a;

	temp_b = *top_b;
	temp_a = *top_a;
	*top_b = (*top_b)->next;
	temp_b->next = temp_a;
	if (temp_a != NULL)
		(*top_a)->previous = temp_b;
	else
		temp_b->previous = NULL;
	*top_a = temp_b;
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_piece **top_a, t_piece **top_b)
{
	t_piece	*temp_a;
	t_piece	*temp_b;

	temp_a = *top_a;
	temp_b = *top_b;
	*top_a = (*top_a)->next;
	temp_a->next = temp_b;
	if (temp_b != NULL)
		(*top_b)->previous = temp_a;
	else
		temp_a->previous = NULL;
	*top_b = temp_a;
	ft_putstr_fd("pb\n", 1);
}
