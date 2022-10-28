/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <jheloaho@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:00:57 by jheloaho          #+#    #+#             */
/*   Updated: 2022/10/28 14:06:19 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcpy(char *dest, const char *src, size_t maxlen)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < maxlen)
		ft_memcpy(dest, src, srclen + 1);
	else if (maxlen != 0)
	{
		ft_memcpy(dest, src, maxlen - 1);
		dest[maxlen - 1] = '\0';
	}
	return (srclen);
}
