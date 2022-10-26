/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 19:54:19 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/26 14:53:47 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

#ifndef LIBFT_H
#define LIBFT_H

void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size);
void	*ft_memmove(void *str1, const void *str2, size_t n);
void	*ft_memset(void *b, char c, size_t len);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);

int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_atoi(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *restrict dest, char *restrict src, size_t size);
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);

char	*ft_strdup(const char *s);
char	*ft_itoa(int n);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);

char	**ft_split(char const *s, char c);

#endif
