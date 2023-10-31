/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 13:47:56 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/27 16:27:45 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*t;

	t = (char *)s;
	i = 0;
	while (i < n)
	{
		t[i] = 0;
		i++;
	}
}