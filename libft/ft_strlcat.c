/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 11:34:43 by lgautier          #+#    #+#             */
/*   Updated: 2017/01/06 16:24:31 by lgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	start;

	i = 0;
	start = ft_strlen(dst);
	if (ft_memchr(dst, '\0', dstsize) == NULL)
		return (dstsize + ft_strlen(src));
	while (src[i] != '\0' && dstsize - 1 > (start + i))
	{
		dst[start + i] = src[i];
		i++;
	}
	dst[start + i] = '\0';
	return (start + ft_strlen(src));
}
