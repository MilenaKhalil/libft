#ifndef PARSER_H
# define PARSER_H

# include "libft/libft.h"
# include <stdlib.h>
# include <stdio.h>

typedef struct s_token
{
	char	*name;
	char	*str;
	int		last;
	//t_token	*next;
}	t_token;

#endif