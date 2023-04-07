/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/25 18:31:36 by dreijans      #+#    #+#                 */
/*   Updated: 2023/04/07 20:51:01 by djoyke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_min(t_piece const *lst_a);

//keep doing until listlen - 3
void	little_sort(t_piece **lst_a, t_piece **lst_b)
{
	if (list_length(*lst_a) == 3)
		return;
	if (find_min(*lst_a))
		pb (lst_a, lst_b);
	else
		rra(lst_a);
	little_sort(lst_a, lst_b);
}

void	push_back(t_piece **lst_b, t_piece **lst_a)
{
	print_lists(*lst_b);
	while (*lst_b)
	{
		pa(lst_b, lst_a);
		*lst_b = (*lst_b)->next;
	}
}
//const will not change my my list, just iterate through it
//max wil take over the index which is the smallest.
// line 46: has to be one because it needs to compare to max first, so no longer 0 but 1 if true, so you can push top.
int find_min(t_piece const *lst_a)
{	
	int	i;
	int max;
	
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
		return(1);
	return(0);
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
