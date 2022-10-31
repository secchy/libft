/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <jheloaho@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:58:21 by jheloaho          #+#    #+#             */
/*   Updated: 2022/10/31 13:34:22 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t size)
{
	void	*ptr;

	if (nelem == 0 || size == 0)
	{
		nelem = size;
		size = 1;
	}
	ptr = (void *) malloc(nelem * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nelem * size);
	return (ptr);
}
