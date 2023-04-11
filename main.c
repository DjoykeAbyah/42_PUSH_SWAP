/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 18:30:22 by dreijans      #+#    #+#                 */
/*   Updated: 2023/04/11 19:23:33 by dreijans      ########   odam.nl         */
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
		ft_free_strings_array(strings);
	}
	else if (argc > 2)
	{
		check_and_assemble(argv + 1, &a, new);
	}
	print_lists(a);
	little_sort(&a, &b);
	push_back(&b, &a);
	// big_sort(&a, &b);
	// print_lists(a);
	// printf("------\n");
	print_lists(a);
	print_lists(b);
	return (0);
}

/* TO DO */
/*
1. solution to list_lenght(list) in check_and assemble line:47
2. utils line:28 first converse to long int before checking
3. BONUS incl GNL
4. malloc fail in 
5. printfuctie niet nodig, gebruik voor de commands gewoon vervangen voor write
6. niks doen als list null is bij de moves?
7. static voor de helper functies
*/

/* pass the address when feeding to a function else it stays local. 
if i want to change anything i need the address*/