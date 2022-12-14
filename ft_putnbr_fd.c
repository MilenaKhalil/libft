/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 13:16:36 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/08 13:30:44 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n < 10)
	{	
		c = n + '0';
		ft_putchar_fd(c, fd);
		return ;
	}
	c = n % 10 + '0';
	ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(c, fd);
}
