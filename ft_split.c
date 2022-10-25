/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 18:40:14 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/25 19:04:43 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		num;

	i = 0;
	num = 0;
	while (s[i++] == c);
	while (1)
	{
		if (s[i] == c || s[i] == '\0')
		{
			num++;
			if (s[i] == 0)
				break ;
			while (s[i++] == c && i != ft_strlen(s) + 1);
		}
		i++;
	}
	printf("num = %d\n", num);
	return (0);
}
int main()
{
	char **t;
	char const *str = "f ydu fyg    gdh gfh    ";
	t = ft_split(str, ' ');
	return 0;
}
