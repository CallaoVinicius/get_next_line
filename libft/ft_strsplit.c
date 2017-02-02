/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 16:15:14 by lgautier          #+#    #+#             */
/*   Updated: 2017/01/19 11:43:51 by lgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_nword(char const *s, char c)
{
	int		n;

	n = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
			n++;
		while (*s != c && *s)
			s++;
	}
	return (n);
}

char		**ft_strsplit(char const *s, char c)
{
	int		n;
	char	**tab;

	if (s && c)
	{
		n = ft_nword(s, c);
		if ((tab = (char **)ft_memalloc(sizeof(char *) * (n + 1))) == NULL)
			return (NULL);
		n = 0;
		while (*s)
		{
			while (*s == c)
				s++;
			if (*s != c && *s)
				tab[n++] = ft_strcdup(s, c);
			while (*s != c && *s)
				s++;
		}
		tab[n] = NULL;
		return (tab);
	}
	return (NULL);
}
