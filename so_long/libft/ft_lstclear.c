/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnona <pnona@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 19:10:10 by pnona             #+#    #+#             */
/*   Updated: 2022/05/22 19:10:12 by pnona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*i;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		i = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = i;
	}
	*lst = NULL;
}
