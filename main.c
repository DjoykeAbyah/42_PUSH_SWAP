/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 18:30:22 by dreijans      #+#    #+#                 */
/*   Updated: 2023/04/12 19:44:53 by dreijans      ########   odam.nl         */
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
	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		strings = ft_split(argv[1], ' ');
		if (!strings)
			terminate();
		check_and_assemble(strings, &a, new);
		sort(&a, &b);
		// parsing(strings, a, b, new);
		ft_free_strings_array(strings);
	}
	else if (argc > 2)
	{
		// parsing(argv + 1, a, b, new);
		check_and_assemble(argv + 1, &a, new);
		sort(&a, &b);
	}
	free_node(&a);
	return (0);
}
/*to do*/
/*
1. fix lines in main.
2. do something about rra, 
sometimes check what the best thing is to do. 
function does 13 or 12
*/