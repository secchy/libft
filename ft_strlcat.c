/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <jheloaho@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:00:47 by jheloaho          #+#    #+#             */
/*   Updated: 2022/10/31 12:55:25 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		len;
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	len = size;
	while (len-- != 0 && *d != '\0')
	{
		d++;
	}
	len = d - dest;
	size = size - len;
	if (size == 0)
		return (len + ft_strlen(s));
	while (*s != '\0')
	{
		if (size != 1)
		{
			*d++ = *s;
			size--;
		}
		s++;
	}
	*d = '\0';
	return (len + (s - src));
}
