/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikhalil <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 19:54:19 by mikhalil      #+#    #+#                 */
/*   Updated: 2022/10/08 15:10:21 by mikhalil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

//#ifndef LIBFT_H
//#define LIBFT_H

#pragma once

void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void    ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size);
void    *ft_memmove(void *str1, const void *str2, size_t n);

int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isdigit(int c);
int ft_atoi(const char *str);

size_t	ft_strlen(const char *s);

char    *ft_strdup(const char *s);

//#endif
