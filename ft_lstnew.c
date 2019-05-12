/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmogo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 16:46:11 by tmogo             #+#    #+#             */
/*   Updated: 2019/04/25 17:53:34 by tmogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *lst;

	lst = (t_list *)malloc(sizeof(t_list) * content_size);
	if (lst == NULL)
		return (NULL);
	lst->next = NULL;
	if (content == NULL)
	{
		lst->content = NULL;
		lst->content_size = 0;
		return (lst);
	}
	lst->content = ft_memalloc(content_size);
	lst->content = ft_memcpy(lst->content, content, content_size);
	lst->content_size = content_size;
	return (lst);
}
