/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 15:42:27 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/25 18:39:56 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	strrev(char *str, size_t size)
{
	size_t	i;
	size_t	min;
	char	temp;

	min = 0;
	if (str[0] == '-')
		min = 1;
	i = min;
	while (i < size / 2 + min)
	{
		temp = str[i];
		str[i] = str[size - i - 1 + min];
		str[size - i - 1 + min] = temp;
		i++;
	}
}

char	*check(char *out, size_t *i, int *n)
{
	if (*n == 0)
	{
		out[0] = '0';
		*i = 1;
	}
	if (*n == INT_MIN)
	{
		out = ft_itoa(*n + 1);
		out[10]++;
		*n = 0;
		*i = 12;
	}
	return (out);
}

char	*ft_itoa(int n)
{
	char	*out;
	size_t	i;

	i = 0;
	out = malloc(sizeof(char) * 12);
	if (!out)
		return (0);
	out = check(out, &i, &n);
	if (n < 0)
	{
		i++;
		n *= -1;
		out[0] = '-';
	}
	while (n != 0)
	{
		out[i++] = n % 10 + '0';
		n /= 10;
	}
	if (i != 12)
		strrev(out, i);
	out[i] = '\0';
	return (out);
}
/*int main()
{
	int	n = -1010;
	char	*t = ft_itoa(n);
	printf("\nn = %d, out = %s\n\n", n, t);
	return 0;
}*/
