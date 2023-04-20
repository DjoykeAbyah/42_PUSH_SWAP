/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 17:17:10 by dreijans      #+#    #+#                 */
/*   Updated: 2023/04/19 17:49:55 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_piece **stack)
{
	t_piece	*one;
	t_piece	*two;
	t_piece	*three;

	if (*stack == NULL)
		exit(EXIT_FAILURE);
	one = *stack;
	two = (*stack)->next;
	three = (*stack)->next->next;
	one->next = three;
	one->previous = two;
	two->next = one;
	two->previous = NULL;
	three->previous = one;
	*stack = two;
}

void	sa(t_piece **a)
{
	swap(a);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_piece **b)
{
	swap(b);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_piece **a, t_piece **b)
{
	swap(a);
	swap(b);
	ft_putstr_fd("ss\n", 1);
}
