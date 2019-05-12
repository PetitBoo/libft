/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmogo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 18:10:40 by tmogo             #+#    #+#             */
/*   Updated: 2019/04/18 20:48:15 by tmogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hays;

	i = 0;
	hays = (char *)haystack;
	if (*needle == '\0')
		return (hays);
	while (hays[i] != '\0' && i < len)
	{
		j = 0;
		while (hays[i + j] != '\0' && hays[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return (&hays[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
