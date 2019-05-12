/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmogo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 17:35:02 by tmogo             #+#    #+#             */
/*   Updated: 2019/04/25 20:52:42 by tmogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_free_lst(t_list *new)
{
	t_list	*nxt;

	while (new)
	{
		nxt = new->next;
		free(new);
		new = nxt;
	}
	return (NULL);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*nxt;
	t_list	*prev;

	if (!lst || !(*f) || !(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new = (*f)(lst);
	prev = new;
	lst = lst->next;
	while (lst)
	{
		if ((nxt = (t_list *)malloc(sizeof(t_list))) == NULL)
		{
			ft_free_lst(new);
			return (NULL);
		}
		nxt = (*f)(lst);
		prev->next = nxt;
		prev = nxt;
		lst = lst->next;
	}
	prev->next = NULL;
	return (new);
}
