/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <jheloaho@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:11:39 by jheloaho          #+#    #+#             */
/*   Updated: 2022/10/28 14:35:13 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			s++;
			i++;
		}
		else
			return (i);
	}
	return (i);
}

static size_t	ft_count_words(const char *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
			words++;
		i++;
	}
	return (words);
}

static void	ft_free_all(char **arr, int n)
{
	while (n--)
	{
		free(arr[n]);
		arr[n] = NULL;
	}
	free(*arr);
	*arr = NULL;
}

static char	**ft_word_arr(char **arr, char const *s, char c, size_t words)
{
	size_t	word_len;
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (n < words && arr)
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		word_len = ft_wordlen(&s[i], c);
		arr[n] = (char *) malloc((word_len + 1) * sizeof(**arr));
		if (!arr[n])
			ft_free_all(arr, n);
		ft_strlcpy(arr[n], &s[i], word_len);
		arr[n][word_len] = '\0';
		while (s[i] != '\0' && s[i] != c)
			i++;
		n++;
	}
	arr[n] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**arr;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	arr = (char **) malloc((words + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	arr = ft_word_arr(arr, s, c, words);
	return (arr);
}
