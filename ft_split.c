/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 18:40:14 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/26 14:53:14 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_words(char const *s, char c)
{
	size_t	i;
	int		num;

	i = 0;
	num = 0;
	while (s[i] == c)
		i++;
	while (1)
	{
		if (s[i] == c || s[i] == '\0')
		{
			num++;
			if (s[i] == 0)
				break ;
			while (s[i] == c && i <= ft_strlen(s))
				i++;
		}
		if (s[i] == 0)
			break ;
		i++;
	}
	return (num);
}

int	slen(char const *b, char d)
{
	int	i;

	i = 0;
	while (b[i] != d && b[i] != '\0')
		i++;
	return (i);
}

void	str_cpy(char const *src, char *dest, char c)
{
	int	i;

	i = 0;
	while (src[i] != c && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ink_del(char const *str, int *j, char c)
{
	while (str[*j] == c)
		*j += 1;
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		i;
	int		j;

	out = malloc(sizeof(char *) * (num_words(s, c) + 1));
	if (!out)
		return (0);
	i = 0;
	j = 0;
	while (i < num_words(s, c))
	{
		ink_del(s, &j, c);
		out[i] = malloc(sizeof(char) * (slen(s + j, c) + 1));
		if (!out[i])
			return (0);
		str_cpy(s + j, out[i], c);
		printf("i = %d, out[i] = %s\n", i, out[i]);
		j += slen(s + j, c) + 1;
		i++;
	}
	out[i] = 0;
	printf("i = %d, out[i] = %s\n", i, out[i]);
	return (0);
}
/*int main()                   // why free?
{
	char **t;
	//char const *t;
	char const *str = "   jfkd u euu          fhhhj        fhj";
	//t = str + 12;
	t = ft_split(str, ' ');
	//printf("%s\n", t);
	//printf("size = %d, str = %s\n", slen((char *)t, 'g'), t);
	return 0;
}*/
