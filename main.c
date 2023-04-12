/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 18:30:22 by dreijans      #+#    #+#                 */
/*   Updated: 2023/04/12 18:52:03 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char		**strings;
	t_piece		*new;
	t_piece		*a;
	t_piece		*b;

	a = NULL;
	b = NULL;
	new = NULL;
	if (argc == 2)
	{
		strings = ft_split(argv[1], ' ');
		if (!strings)
			terminate();
		check_and_assemble(strings, &a, new);
		sort(&a, &b);
		ft_free_strings_array(strings);
	}
	else if (argc > 2)
	{
		check_and_assemble(argv + 1, &a, new);
		sort(&a, &b);
	}
	return (0);
}

/* TO DO */
/*
1. utils line:28 first converse to long int before checking
2. malloc fail in 
3. niks doen als list null is bij de moves?
4. terminate checken in functies 
*/