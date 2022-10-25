/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 13:39:56 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/16 17:09:04 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)str1;
	s = (char *)str2;
	if (d == s)
		return (str1);
	if (s < d)
	{
		while (n--)
			*(d + n) = *(s + n);
		return (str1);
	}
	while (n--)
		*d++ = *s++;
	return (str1);
}
/*int main ()
{
   char src[]  = "lorem ipsum dolor sit amet", src1[] = "lorem ipsum dolor sit amet";
   char *dest = src + 1, dest1 = src1 + 1;


   printf("Before ft_memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 8);
   //dest[3] = '*';
   printf("After ft_memmove dest = %s, src = %s\n", dest, src);
   
   //printf("\nBefore memmove dest = %s, src = %s\n", dest1, src1);
   //memmove(dest1, src1, 1);
   //printf("After memmove dest = %s, src = %s\n", dest1, src1);

   return (0);
}*/
