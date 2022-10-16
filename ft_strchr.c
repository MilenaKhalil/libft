/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 12:38:00 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/05 13:01:28 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
	int	i;
	char *str;
    
    str = (char *)s;
	i = 0;
	if (c == 0)
		return ("");
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (str + i);
		i++;
	}
	return (0);
}
/*#include <string.h>
#include <stdio.h>
int main()
{
	char a[20];
	char c;
	char *t;
	strcpy(a, "figid");
	c = 'g';
	t = strchr(a, c);
	printf("%s\n", t);
	
	strcpy(a, "figid");
	c = 'g';
	t = ft_strchr(a, c);
	printf("%s\n", t);
	return 0;
}*/
