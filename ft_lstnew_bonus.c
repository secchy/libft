/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <jheloaho@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:45:30 by jheloaho          #+#    #+#             */
/*   Updated: 2022/10/28 16:03:27 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *) malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	if (content == NULL)
		node->content = NULL;
	else
	{
		node->content = (void *) malloc(sizeof(content));
		if (!node->content)
			return (NULL);
		node->content = content;
	}
	node->next = NULL;
	return (node);
}
