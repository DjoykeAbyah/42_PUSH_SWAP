/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/07 20:39:00 by dreijans      #+#    #+#                 */
/*   Updated: 2023/04/12 17:06:25 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_piece **a)
{
	t_piece	*temp;

	if (*a == NULL)
		exit(EXIT_FAILURE);
	temp = *a;
	lstadd_back(a, temp);
	*a = (*a)->next;
	temp->next = NULL;
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_piece **b)
{
	t_piece	*temp;

	if (*b == NULL)
		exit(EXIT_FAILURE);
	temp = *b;
	lstadd_back(b, temp);
	*b = (*b)->next;
	temp->next = NULL;
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_piece **a, t_piece **b)
{
	ra(a);
	rb(b);
	ft_putstr_fd("rr\n", 1);
}
