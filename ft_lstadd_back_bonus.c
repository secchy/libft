/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:14:59 by jheloaho          #+#    #+#             */
/*   Updated: 2022/10/28 16:20:43 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnode;

	if (*lst == NULL)
		*lst = new;
	else
	{
		if (new != NULL)
		{
			lastnode = *lst;
			while (lastnode->next != NULL)
			{
				lastnode = lastnode->next;
			}
		lastnode->next = new;
		}
	}
}	
