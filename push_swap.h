/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 18:00:30 by dreijans      #+#    #+#                 */
/*   Updated: 2023/04/07 20:21:54 by djoyke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./Libft/libft.h"
# include <stdlib.h>
# include <stdio.h>

typedef struct s_piece
{
	int					value;
	int					index;
	struct s_piece		*next;
	struct s_piece		*previous;
}							t_piece;

// typedef struct l_data
// {
// 	int				listsize;
// 	struct s_piece	start;
// }						t_data;

int			digit_check(char *c);
int			check_and_assemble(char **strings, t_piece **a, t_piece *new);
int			terminate(int error);
void		ft_free_strings_array(char **strings);

t_piece		*new_node(char *str_input);
void		lstadd_back(t_piece **list, t_piece *new);
int			list_length(t_piece *list);
void		indexing(t_piece *list);
void		print_lists(t_piece *list);
t_piece		*lstlast(t_piece *lst);
void		lstadd_front(t_piece **lst, t_piece *new);
int			sort_check(t_piece *list);

void		sa(t_piece **a);
void		sb(t_piece **b);
void		ss(t_piece **a, t_piece **b);
void		pb(t_piece **top_s, t_piece **top_d);
void		pa(t_piece **top_s, t_piece **top_d);
void		pop(t_piece **p);
void		ra(t_piece **a);
void		rb(t_piece **b);
void		rr(t_piece **a, t_piece **b);
void		rra(t_piece **a);
void		rrb(t_piece **b);
void		rrr(t_piece **a, t_piece **b);

void		big_sort(t_piece **lst_a, t_piece **lst_b);
void		three_sort(t_piece **lst_a);
// void		two_sort(t_piece **lst_a);
void		little_sort(t_piece **lst_a, t_piece **lst_b);
void		push_back(t_piece **lst_b, t_piece **lst_a);

#endif