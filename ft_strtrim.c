/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 17:25:22 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/25 15:40:37 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*out;
	int		i;
	int		j;
	int		k;

	out = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!out)
		return (0);
	i = 0;
	j = 0;
	while (s1[i++] != 0)
	{
		out[j++] = s1[i - 1];
		k = 0;
		while (set[k++] != 0)
		{
			if (set[k - 1] == out[j - 1])
			{
				j--;
				break ;
			}
		}
	}
	out[j] = '\0';
	return (out);
}
/*int main()
{
	char const *a = "qweiop";
	char const *b = "poswgiggqgeyr";
	printf("s1 = %s, set = %s, out = %s\n", a, b, ft_strtrim(a, b));
	return 0;
}*/
