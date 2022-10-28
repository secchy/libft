/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <jheloaho@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:47:51 by jheloaho          #+#    #+#             */
/*   Updated: 2022/10/28 14:29:58 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char    *ft_strchr(const char *s, int c);
char    *ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strnstr(const char *str, const char *to_find, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int     ft_atoi(const char *str);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_tolower(int c);
int     ft_toupper(int c);
size_t  ft_strlcat(char *dest, const char *src, size_t size);
size_t  ft_strlen(const char *str);
size_t  ft_strlcpy(char *dest, const char *src, size_t maxlen);
void    ft_bzero(void *s, size_t len);
void    *ft_calloc(size_t nelem, size_t size);
void    *ft_memchr(const void *s, int c, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memset(void *dest, int c, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

#endif
