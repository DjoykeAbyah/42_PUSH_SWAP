/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/07 20:39:00 by dreijans      #+#    #+#                 */
/*   Updated: 2023/04/19 17:47:28 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_piece **stack)
{
	t_piece	*temp;

	if (*stack == NULL)
		exit(EXIT_FAILURE);
	temp = *stack;
	lstadd_back(stack, temp);
	*stack = (*stack)->next;
	temp->next = NULL;
}

void	ra(t_piece **a)
{
	rotate(a);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_piece **b)
{
	rotate(b);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_piece **a, t_piece **b)
{
	rotate(a);
	rotate(b);
	ft_putstr_fd("rr\n", 1);
}
