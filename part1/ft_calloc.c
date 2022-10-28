/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:58:21 by jheloaho          #+#    #+#             */
/*   Updated: 2022/10/28 13:58:24 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t size)
{
	void	*ptr;

	ptr = (void *) malloc(nelem * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nelem);
	return (ptr);
}
