/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 18:30:22 by dreijans      #+#    #+#                 */
/*   Updated: 2023/04/04 10:22:53 by dreijans      ########   odam.nl         */
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
	//big_sort(&a, &b);
	//three_sort(&a);
	little_sort(&a, &b);
	print_lists(a);
	print_lists(b);
	return (0);
}

/* TO DO */
/*
1. struct to keep listsize start and end?
2. do i need a push_swap.a
3. solution to list_lenght(list) in check_and assemble line:47
4. utils line:28 first converse to long int before checking
5. fix indexing
6. BONUS incl GNL
7. malloc fail in 
8. give char mee aan pa/pb ipv 2 versies etc voor sa/sb, ra/rb
9. little_sort functie maken
*/

/* pass the address when feeding to a function else it stays local. 
if i want to change anything i need the address*/

// t_piece *test = b->next;
// printf("test->prev->value[%d]\n", test->next->previous->value);

	// printf("list a before\n");
	// print_list(a);
	// printf("list b before\n");
	// print_list(b);
	// pb(&a, &b);
	// pb(&a, &b);
	// pa(&b, &a);
	// pa(&b, &a);
	// printf("list a between\n");
	// print_list(a);
	// printf("list b between\n");
	// print_list(b);
	// sa(&a);
	// ra(&a);
	// rb(&b);
	// rr(&a, &b);
	// rra(&a);
	// rrb(&b);
	// rrr(&a, &b);
	// printf("list a after\n");
	// print_list(a);
	// printf("list b after\n");
	// print_list(b);