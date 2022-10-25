/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 14:14:28 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/16 14:34:19 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	str = malloc(sizeof(char) * len);
	i = start;
	while (i - start < len)
	{
		str[i - start] = s[i];
		i++;
	}
	str[i - start] = '\0';
	return (str);
}
/*#include <string.h>
int main()
{
	char const	*a = "abcdef";
	printf("%s\n", ft_substr(a, 0, 0));
	return 0;
}*/
