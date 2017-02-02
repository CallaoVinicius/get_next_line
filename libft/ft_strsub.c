/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 18:17:45 by lgautier          #+#    #+#             */
/*   Updated: 2017/01/19 11:59:11 by lgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*dst;

	i = 0;
	if (s)
	{
		if ((dst = ft_strnew(len)) == NULL)
			return (NULL);
		while (i < len && s[start])
			dst[i++] = s[start++];
		dst[i] = '\0';
		return (dst);
	}
	return (0);
}
