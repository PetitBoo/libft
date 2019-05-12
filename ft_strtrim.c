/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmogo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 14:45:28 by tmogo             #+#    #+#             */
/*   Updated: 2019/04/21 14:18:56 by tmogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (s == NULL)
		return (NULL);
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
		i++;
	j = ft_strlen(s);
	if (i == j)
		return (ft_strnew(1));
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t' || s[j] == '\0')
		j--;
	str = (char *)malloc(sizeof(char) * (j - i + 2));
	if (str == NULL)
		return (NULL);
	k = 0;
	while (i <= j && s[i] != '\0')
		str[k++] = s[i++];
	str[k] = '\0';
	return (str);
}
