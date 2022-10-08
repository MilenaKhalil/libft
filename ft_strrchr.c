/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 13:05:07 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/05 13:29:00 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*out;
	char	*str = (char *)s;

	out = 0;
	i = 0;
	if (c == 0)
		return ("");
	while (s[i] != '\0')
	{
		if (s[i] == c)
			out = str + i;
		i++;
	}
	return (out);
}
/*#include <string.h>
#include <stdio.h>
int main()
{
	char a[20];
	char c;
	char *t;
	strcpy(a, "fslfdk");
	c = 0;
	t = strrchr(a, c);
	printf("%s\n", t);
	
	strcpy(a, "fsfdjsk");
	c = 0;
	t = ft_strrchr(a, c);
	printf("%s\n", t);
	return 0;
}*/
