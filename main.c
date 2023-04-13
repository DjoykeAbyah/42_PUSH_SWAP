/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 18:30:22 by dreijans      #+#    #+#                 */
/*   Updated: 2023/04/13 14:44:34 by dreijans      ########   odam.nl         */
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
	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		strings = ft_split(argv[1], ' ');
		if (!strings)
			terminate();
		parse_and_sort(strings, &a, &b, new);
		ft_free_strings_array(strings);
	}
	else if (argc > 2)
		parse_and_sort(argv + 1, &a, &b, new);
	free_node(&a);
	return (0);
}
