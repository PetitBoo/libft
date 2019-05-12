/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmogo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 18:06:49 by tmogo             #+#    #+#             */
/*   Updated: 2019/04/21 17:36:48 by tmogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(long result, int sign, const char *str, int i)
{
	if (result * sign > 922337203685477580 ||
			(result * sign == 922337203685477580 && str[i] > 7))
		return (-1);
	else if (result * sign < -922337203685477580 ||
			(result * sign == -922337203685477580 && str[i] > 6))
		return (0);
	else
		return (1);
}

int			ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (ft_check(result, sign, &str[i], i) != 1)
			return (ft_check(result, sign, &str[i], i));
		result = result * 10 + str[i] - 48;
		i++;
	}
	return ((int)(result) * sign);
}
