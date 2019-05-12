/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmogo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 13:02:07 by tmogo             #+#    #+#             */
/*   Updated: 2019/04/18 20:48:33 by tmogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	char	*hays;

	i = 0;
	hays = (char *)haystack;
	if (*needle == '\0')
		return (hays);
	while (hays[i] != '\0')
	{
		j = 0;
		while (hays[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (&hays[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
