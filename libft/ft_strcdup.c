/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 16:13:53 by lgautier          #+#    #+#             */
/*   Updated: 2017/01/31 12:11:55 by lgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strcdup(char const *s, char c)
{
	int		i;
	char	*dst;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if ((dst = (char *)ft_strnew(i)) == NULL)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
