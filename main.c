/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 13:34:26 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/08 15:23:03 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	//ft_putnbr_fd(1239, 1);
	//ft_putchar_fd('\n', 1);
	void	*b = ft_calloc(1, -10);
    void    *c = calloc(1, -10);
    printf("my: %p  or: %p\n", b, c);
}
