/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 16:42:25 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/16 17:08:16 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[j] != 0)
		j++;
	while (i < dstsize && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	while (i <= dstsize)
	{
		dst[i] = 0;
		i++;
	}
	return (j);
}*/
/*#include <string.h>
int main()
{
	char *a = "qwertyui", *a1 = "qwertyui";
	char *b = "123000", *b1 = "123000";
	int i, i1, n = 5;
	i = strlcpy(a, b, 0);
	//i1 = ft_strlcpy(a1, b1, n);
	printf("or: %s %s %d\nmy: %s %s %d\n", a, b, i, a1, b1, i1);
	return (0);
}*/
