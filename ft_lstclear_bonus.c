/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <jheloaho@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:30:04 by jheloaho          #+#    #+#             */
/*   Updated: 2022/11/03 14:32:41 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;

	if (!del)
		return ;
	if (*lst != NULL)
	{
		while (*lst != NULL)
		{
			list = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = list;
		}
		*lst = NULL;
		list = NULL;
	}
}
