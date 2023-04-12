/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/07 20:40:26 by dreijans      #+#    #+#                 */
/*   Updated: 2023/04/12 16:55:40 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_piece **a)
{
	t_piece	*temp;
	t_piece	*tail;

	if (*a == NULL)
		exit(EXIT_FAILURE);
	tail = lstlast(*a);
	temp = tail->previous;
	lstadd_front(a, tail);
	(*a)->previous = NULL;
	temp->next = NULL;
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_piece **b)
{
	t_piece	*temp;
	t_piece	*tail;

	if (*b == NULL)
		exit(EXIT_FAILURE);
	tail = lstlast(*b);
	temp = tail->previous;
	lstadd_front(b, tail);
	(*b)->previous = NULL;
	temp->next = NULL;
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_piece **a, t_piece **b)
{
	rra(a);
	rrb(b);
	ft_putstr_fd("rrr\n", 1);
}
