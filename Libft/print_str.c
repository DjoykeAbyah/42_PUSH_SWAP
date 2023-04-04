/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_str.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/23 12:08:54 by dreijans      #+#    #+#                 */
/*   Updated: 2023/03/28 15:08:26 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_str(char *s)
{
	if (s == '\0')
	{
		return (write (1, "(null)", 6));
	}
	else
		return (write (1, s, ft_strlen(s)));
}

/*
write returns how much it wrote
*/