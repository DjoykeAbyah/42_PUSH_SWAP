/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 18:30:22 by dreijans      #+#    #+#                 */
/*   Updated: 2023/04/12 17:38:06 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
			terminate(1);
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
2. BONUS incl GNL
3. malloc fail in 
4. niks doen als list null is bij de moves?
5. static voor de helper functies
*/