/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/07 20:40:26 by dreijans      #+#    #+#                 */
/*   Updated: 2023/04/19 17:44:57 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_piece **stack)
{
	t_piece	*temp;
	t_piece	*tail;

	if (*stack == NULL)
		exit(EXIT_FAILURE);
	tail = lstlast(*stack);
	temp = tail->previous;
	lstadd_front(stack, tail);
	(*stack)->previous = NULL;
	temp->next = NULL;
}

void	rra(t_piece **a)
{
	reverse_rotate(a);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_piece **b)
{
	reverse_rotate(b);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_piece **a, t_piece **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_putstr_fd("rrr\n", 1);
}
