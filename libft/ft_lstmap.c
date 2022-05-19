/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:21:19 by aboymond          #+#    #+#             */
/*   Updated: 2021/11/18 18:43:32 by aboymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	new = 0;
	while (lst)
	{
		if (!new)
		{
			new = ft_lstnew(f(lst->content));
			tmp = new;
			lst = lst->next;
			if (!new)
				return (0);
		}
		new->next = ft_lstnew(f(lst->content));
		if (!new->next)
		{
			ft_lstclear(&tmp, del);
			return (0);
		}
		new = new->next;
		lst = lst->next;
	}
	return (tmp);
}
