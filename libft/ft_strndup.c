/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 11:39:37 by lgautier          #+#    #+#             */
/*   Updated: 2017/01/07 15:06:50 by lgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*dst;

	i = 0;
	dst = ft_strnew(n < ft_strlen(s) ? n : ft_strlen(s));
	if (dst == NULL)
		return (NULL);
	while (s[i] != '\0' && i < n)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
