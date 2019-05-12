/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmogo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 16:40:51 by tmogo             #+#    #+#             */
/*   Updated: 2019/04/21 14:30:51 by tmogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	unsigned int	m;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		m = -n;
	}
	else
		m = n;
	if (m < 10)
	{
		c = m + 48;
		ft_putchar_fd(c, fd);
	}
	if (m > 9)
	{
		ft_putnbr_fd(((m - m % 10) / 10), fd);
		ft_putnbr_fd((m % 10), fd);
	}
}
