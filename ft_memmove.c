#include "libft.h"

void    *ft_memmove(void *str1, const void *str2, size_t n)
{
    size_t  i;
    char	*s1;
	char	*s2;

	s1 = (char *)str2;
	s2 = (char *)str1;
	i = 0;
	while (i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	return ((void *)s2);
}
/*#include <string.h>
int main ()
{
   char dest[] = "", dest1[] = "";
   const char src[]  = "", src1[] = "";

   printf("Before ft_memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 1);
   printf("After ft_memmove dest = %s, src = %s\n", dest, src);
   
   printf("\nBefore memmove dest = %s, src = %s\n", dest1, src1);
   memmove(dest1, src1, 1);
   printf("After memmove dest = %s, src = %s\n", dest1, src1);

   return(0);
}*/
