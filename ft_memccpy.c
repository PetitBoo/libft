/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmogo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 19:23:03 by tmogo             #+#    #+#             */
/*   Updated: 2019/04/17 16:08:00 by tmogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	k;

	k = 0;
	while (k < n)
	{
		((unsigned char *)dest)[k] = ((unsigned const char *)src)[k];
		if (((unsigned char *)src)[k] == (unsigned char)c)
			return (dest + k + 1);
		k++;
	}
	return (NULL);
}
