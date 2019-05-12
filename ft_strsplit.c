/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmogo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 14:59:50 by tmogo             #+#    #+#             */
/*   Updated: 2019/04/25 22:00:16 by tmogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		ft_count(char const *s, char c)
{
	int word;
	int i;

	i = 0;
	word = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			word++;
		i++;
	}
	if (s[0] != '\0')
		word++;
	return (word);
}

static char		*ft_word(char const *s, char c, int *i)
{
	char	*str;
	int		j;

	str = (char *)malloc(sizeof(s) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	j = 0;
	while (s[*i] != c && s[*i] != '\0')
	{
		str[j] = s[*i];
		*i += 1;
		j++;
	}
	str[j] = '\0';
	while (s[*i] == c && s[*i])
		*i += 1;
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	char	word;
	int		i;
	int		j;

	if (!s || !c)
		return (NULL);
	word = ft_count(s, c);
	if (!(str = (char **)malloc(sizeof(*str) * word + 1)))
		return (NULL);
	i = 0;
	j = -1;
	while (s[i] == c && s[i])
		i++;
	while (++j < word && s[i])
	{
		str[j] = ft_word(s, c, &i);
		if (str[j] == NULL)
		{
			ft_free(str);
			return (NULL);
		}
	}
	str[j] = NULL;
	return (str);
}
