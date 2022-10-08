/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 13:40:32 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/08 13:42:29 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	y;

	i = 0;
	while (s[i] != '\0')
	{
		y = s[i];
		ft_putchar_fd(y, fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}
