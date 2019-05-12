/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmogo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:08:37 by tmogo             #+#    #+#             */
/*   Updated: 2019/04/03 15:11:50 by tmogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int	a;

	a = 0;
	if (nb <= 0)
		return (0);
	else
		while ((a * a) <= nb)
		{
			if ((a * a) == nb)
				return (a);
			++a;
		}
	return (0);
}
