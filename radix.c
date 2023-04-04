/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   radix.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/25 18:31:36 by dreijans      #+#    #+#                 */
/*   Updated: 2023/04/04 10:23:39 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

		//102
		//120
		//201
		//210
		//021
		
void	little_sort(t_piece **lst_a, t_piece **lst_b)
{
	while (list_length(*lst_b) != 2)
	{
		if ((*lst_a)->index == 0)
			pb(lst_a, lst_b);
		if ((*lst_a)->index == 1)
			pb(lst_a, lst_b);
	}
	*lst_a = (*lst_a)->next;
	if (!sort_check(*lst_a))
		rra(lst_a);
	pa(lst_b, lst_a);
	pa(lst_b, lst_a);
}

void	two_sort(t_piece **lst_a)
{
	while (!sort_check(*lst_a))
		rra(lst_a);
}

void	three_sort(t_piece **lst_a)
{
	int	last;

	last = lstlast(*lst_a)->index;
	while (!sort_check(*lst_a))
	{
		if ((*lst_a)->index == 1 && last == 2)
			sa(lst_a);
		else if ((*lst_a)->index == 1 && last == 0)
			rra(lst_a);
		else if ((*lst_a)->index == 2 && last == 1)
			ra(lst_a);
		else if ((*lst_a)->index == 2 && last == 0)
		{
			sa(lst_a);
			rra(lst_a);
		}
		else if ((*lst_a)->index == 0)
		{
			rra(lst_a);
			sa(lst_a);
		}
	}
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
//value lst_a dus dereference lst!!!!!!!!!
