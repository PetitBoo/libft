/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmogo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 12:52:27 by tmogo             #+#    #+#             */
/*   Updated: 2019/04/21 17:15:11 by tmogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_long(int n)
{
	int			i;
	long int	temp;

	i = 0;
	if (n < 0)
	{
		i++;
		temp = (long int)n;
		temp = -temp;
	}
	else
		temp = (long int)(n);
	if (temp == 0)
		i++;
	while (temp > 0)
	{
		temp = temp / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	temp;

	i = ft_long(n);
	if ((str = (char *)malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	if (n < 0)
	{
		temp = (long int)n;
		temp = -temp;
	}
	else
		temp = (long int)n;
	str[i] = '\0';
	i--;
	while (i >= 0)
	{
		str[i] = temp % 10 + 48;
		temp = temp / 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
