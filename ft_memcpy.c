/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 16:48:57 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/08 13:10:06 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*#include <string.h>
#include <stdio.h>
int main()
{
	char a[50] = "aaaaaaaaaaaaaaaaaaa";
	char b[50] = "aaaaaaaaaaaaaaaaaaa";
	char c[50] = "";
	void *t;

	t = memcpy(a, c, 5);
	printf("%s\n%s\n", a, t);
	
	t = ft_memcpy(b, c, 5);
	printf("\n%s\n%s\n", b, t);
	return 0;
}*/
