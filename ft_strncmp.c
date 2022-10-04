/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 20:59:40 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/04 21:05:02 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;
	size_t	j;

	j = 0;
	while (j < n)
	{
		i = s1[j] - s2[j];
		if (s1[j] != s2[j] || s1[j] == '\0' || s2[j] == '\0')
			break ;
		j++;
	}
	return (i);
}
