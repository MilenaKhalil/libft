/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milena <milena@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:47:51 by milena            #+#    #+#             */
/*   Updated: 2023/10/28 17:28:56 by milena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

int	size(char **str)
{
	int i = 0;

	while (str[i])
		i++;
	return i;
}

int	ft_max(int a, int b)
{
	if (a > b)
		return a;
	return b;
}

int	compare(char *str1, char *str2)
{
	int	max_len;

	max_len = ft_max(ft_strlen(str1), ft_strlen(str2));
	return (ft_strncmp(str1, str2, max_len));
}

char	*get_name(char *str)
{
	if (!compare(str, "|"))
		return ("PIPE");
	else if (!compare(str, ">"))
		return ("GREAT");
	else if (!compare(str, "<"))
		return ("LESS");
	else if (!compare(str, ">>"))
		return ("GREATGREAT");
	else if (!compare(str, "<<"))
		return ("LESSLESS");
	else if (!compare(str, "||"))
		return ("PIPEPIPE");
	else if (str[0] == '$')
		return ("VAR");
	return ("WORD");
}

void	get_token(t_token *out, char *s)
{
	out->str = s;
	out->name = get_name(s);
	out->last = 0;
}

t_token	*lexer(char *s)                          // does not handle quotes
{
	int		i;
	char	**str;
	t_token	*out;

	str = ft_split(s, ' ');
	int sizze = size(str);
	out = malloc(sizeof(t_token) * (sizze + 1));
	out[sizze].last = 1;
	i = 0;
	while (i < sizze)
	{
		get_token(&out[i], str[i]);
		i++;
	}
	return (out);
}

void	print_tok(t_token *tokens)
{
	int i = 0;

	while (!tokens[i].last)
	{
		printf("element %d \nname = %s, str = %s\n",
			i, tokens[i].name, tokens[i].str);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_token *test = lexer(argv[1]);

	print_tok(test);
}