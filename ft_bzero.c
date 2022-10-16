#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t  i;
    unsigned char   *s1;

    i = -1;
    s1 = (unsigned char *)s;
    while (i++ < n - 1)
        s1[i] = 0;
    s = s1;
}
