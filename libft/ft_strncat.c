/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:59:18 by lgautier          #+#    #+#             */
/*   Updated: 2017/01/07 14:52:09 by lgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	i;
	int		start;

	i = 0;
	start = ft_strlen(dst);
	while (src[i] != '\0' && i < n)
	{
		dst[start + i] = src[i];
		i++;
	}
	dst[start + i] = '\0';
	return (dst);
}
