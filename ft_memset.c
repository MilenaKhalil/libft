/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 14:18:12 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/08 13:09:49 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, char c, size_t len)
{
	size_t	i;
	char	*str;

	str = (char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	b = (void *)str;
	return (b);
}
/*#include <string.h>
int main()
{
	char *a;
	strcpy(a, "");
	void *t = ft_memset(a, '9', 5);
	printf("%s\n", t);
	strcpy(a, "");
	t = memset(a, '9', 5);
	printf("%s\n", t);
	return 0;
}*/
