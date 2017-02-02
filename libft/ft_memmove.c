/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:26:47 by lgautier          #+#    #+#             */
/*   Updated: 2017/01/12 14:18:49 by lgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst <= src)
		ft_memcpy(dst, src, n);
	else
		while (n-- > 0)
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	return (dst);
}
