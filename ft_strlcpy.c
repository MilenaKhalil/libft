/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 16:42:25 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/30 13:24:05 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i + 1 < dstsize && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < ft_strlen(dst))
	{
		dst[i] = 0;
		i++;
	}
	return (ft_strlen(src));
}
/*#include <string.h>
int main()
{
	char a[100] = "qwe", a1[100] = "qwe";
	char b[100] = "", b1[100] = "";
	int i = 0, i1 = 0, n = 2;
	i = strlcpy(a, b, n);
	i1 = ft_strlcpy(a1, b1, n);
	printf("or: %s %s %d\nmy: %s %s %d\n", a, b, i, a1, b1, i1);
	return (0);
}*/
