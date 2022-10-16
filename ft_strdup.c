#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *t;
    int     i;
    int     n;

    n = ft_strlen(s);
    t = malloc(sizeof(char) * (n + 1));
    i = -1;
    while (i++ < n - 1)
        t[i] = s[i];
    t[i] = 0;
    return (t);
}

/*#include <string.h>

int main()
{
    const char source[] = "hdh jjd";
    char *t = ft_strdup(source);
    char *target = strdup(source);
 
    printf("or: %s\nmine: %s\n", target, t);
    printf("%d\n", strcmp(target, t));
    printf("%d %d\n", target[strlen(target)], t[ft_strlen(t)]);
    return 0;
}*/
