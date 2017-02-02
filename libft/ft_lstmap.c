/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 20:48:38 by lgautier          #+#    #+#             */
/*   Updated: 2016/12/13 16:07:54 by lgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*begin;
	t_list	*new;

	if (lst == NULL)
		return (NULL);
	begin = f(lst);
	new = begin;
	while (lst->next)
	{
		new->next = f(lst->next);
		new = new->next;
		lst = lst->next;
	}
	return (begin);
}
