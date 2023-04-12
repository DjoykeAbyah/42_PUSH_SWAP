/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/25 18:31:36 by dreijans      #+#    #+#                 */
/*   Updated: 2023/04/12 19:50:08 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_piece const *lst_a)
{	
	int	i;
	int	max;

	i = 0;
	max = 1000;
	while (lst_a)
	{
		if (max > lst_a->index)
		{
			max = lst_a->index;
			i++;
		}
		lst_a = lst_a->next;
	}
	if (i == 1)
		return (1);
	return (0);
}

void	three_sort(t_piece **lst_a)
{
	int	m;
	int	l;

	m = (*lst_a)->next->index;
	l = lstlast(*lst_a)->index;
	while (!sort_check(*lst_a))
	{
		if (((*lst_a)->index > m) && (m < l) && (l > (*lst_a)->index))
			sa(lst_a);
		else if (((*lst_a)->index < m) && (m > l) && (l < (*lst_a)->index))
			rra(lst_a);
		else if (((*lst_a)->index > m) && (m < l) && (l < (*lst_a)->index))
			ra(lst_a);
		else if (((*lst_a)->index > m) && (m > l) && (l < (*lst_a)->index))
		{
			sa(lst_a);
			rra(lst_a);
		}
		else if (((*lst_a)->index < m) && (m > l) && (l > (*lst_a)->index))
		{
			rra(lst_a);
			sa(lst_a);
		}
	}
}

void	little_sort(t_piece **lst_a, t_piece **lst_b)
{
	if (list_length(*lst_a) == 3 && !sort_check(*lst_a))
	{
		three_sort(lst_a);
		return ;
	}
	if (find_min(*lst_a))
		pb (lst_a, lst_b);
	else
		ra(lst_a);
	if (sort_check(*lst_a))
		return ;
	little_sort(lst_a, lst_b);
}

void	big_sort(t_piece **lst_a, t_piece **lst_b)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = list_length(*lst_a);
	while (!sort_check(*lst_a))
	{
		while (*lst_a && j < len)
		{
			if ((((*lst_a)->index >> i) & 1) == 1)
				ra(lst_a);
			else
				pb(lst_a, lst_b);
			j++;
		}
		while (*lst_b)
			pa(lst_b, lst_a);
		j = 0;
		i++;
	}
}

void	sort(t_piece **lst_a, t_piece **lst_b)
{
	int	len;

	len = list_length(*lst_a);
	if (len == 2 && !sort_check(*lst_a))
		ra(lst_a);
	else if (len == 3)
		three_sort(lst_a);
	else if (len > 3 || len < 10)
	{
		little_sort(lst_a, lst_b);
		while (list_length(*lst_b) != 0)
			pa(lst_b, lst_a);
	}
	if (len >= 10)
		big_sort(lst_a, lst_b);
}
