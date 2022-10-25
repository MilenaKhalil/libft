/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 13:47:56 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/25 18:45:28 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	i = -1;
	s1 = (unsigned char *)s;
	while (i++ < n - 1)
		s1[i] = 0;
	s = s1;
}
