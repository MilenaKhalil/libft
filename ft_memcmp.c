/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 17:15:44 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/08 13:10:23 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	size_t	j;
	char	*a;
	char	*b;

	a = (char *)s1;
	b = (char *)s2;
	j = 0;
	while (j < n)
	{
		i = a[j] - b[j];
		if (a[j] != b[j] || a[j] == '\0' || b[j] == '\0')
			break ;
		j++;
	}
	return (i);	
}
/*#include <string.h>
#include <stdio.h>
int main()
{
	char a[50] = "aaaaaa0aaaaa";
	char b[50] = "aaaaaaaaaaaaaaaaaa";
	int t;

	t = memcmp(a, b, 6);
	printf("%d\n", t);
	
	t = ft_memcmp(a, b, 6);
	printf("\n%d\n", t);
	return 0;
}*/
