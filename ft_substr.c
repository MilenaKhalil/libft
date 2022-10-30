/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 14:14:28 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/30 13:36:28 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;

	out = malloc(sizeof(char) * (len + 1));
	if (!out)
		return (0);
	ft_strlcpy(out, s + start, len + 1);
	return (out);
}
/*#include <string.h>
int main()
{
	char const	*a = "";
	printf("my = %s\n", ft_substr(a, 0, 13));
	return 0;
}*/
