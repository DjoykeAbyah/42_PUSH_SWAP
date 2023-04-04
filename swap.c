/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 17:17:10 by dreijans      #+#    #+#                 */
/*   Updated: 2023/03/22 16:00:48 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_piece **a)
{
	t_piece	*one;
	t_piece	*two;
	t_piece	*three;

	if (*a == NULL)
		exit(EXIT_FAILURE);
	one = *a;
	two = (*a)->next;
	three = (*a)->next->next;
	one->next = three;
	one->previous = two;
	two->next = one;
	two->previous = NULL;
	three->previous = one;
	*a = two;
	ft_printf("sa\n");
}

void	sb(t_piece **b)
{
	t_piece	*one;
	t_piece	*two;
	t_piece	*three;

	if (*b == NULL)
		exit(EXIT_FAILURE);
	one = *b;
	two = (*b)->next;
	three = (*b)->next->next;
	one->next = three;
	one->previous = two;
	two->next = one;
	two->previous = NULL;
	three->previous = one;
	*b = two;
	ft_printf("sb\n");
}

void	ss(t_piece **a, t_piece **b)
{
	sa(a);
	sb(b);
	ft_printf("ss\n");
}

// void	pop(t_piece **p)
// {
// 	t_piece	*temp;

// 	temp = *p;
// 	*p = (*p)->next;
// 	free(temp);
// }
