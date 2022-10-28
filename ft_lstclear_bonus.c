/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <jheloaho@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:30:04 by jheloaho          #+#    #+#             */
/*   Updated: 2022/10/28 17:37:35 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;

	list = *lst;
	if (*lst != NULL)
	{
		while (list->next != NULL)
		{
			ft_lstdelone(list, del);
			list = (*lst)->next;
		}
		ft_lstdelone(*lst, del);
		*lst = NULL;
	}
}
