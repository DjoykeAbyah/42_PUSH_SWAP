/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 18:30:22 by dreijans      #+#    #+#                 */
/*   Updated: 2023/04/14 20:40:45 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_piece		*a;
	t_piece		*b;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	else if (argc >= 2)
	{
		parse(argv + 1, &a);
		sort(&a, &b);
	}
	free_node(&a);
	return (0);
}
