/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 17:25:22 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/30 13:16:38 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*out;

	i = 0;
	k = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	while (ft_strchr(set, s1[k]) && k)
		k--;
	if (i > k)
		k = i - 1;
	out = malloc(sizeof(char) * (k - i + 2));
	if (!out)
		return (0);
	j = i;
	while (i <= k)
	{
		out[i - j] = s1[i];
		i++;
	}
	out[i - j] = '\0';
	return (out);
}
/*int main()
{
	char const *a = "     hgsdj     ";
	char const *b = "sdjks ";
	printf("out = %s\n", ft_strtrim(a, b));
	return 0;
}*/
