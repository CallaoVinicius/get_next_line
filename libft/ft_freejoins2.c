/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freejoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 18:11:00 by lgautier          #+#    #+#             */
/*   Updated: 2017/01/14 15:42:53 by lgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_freejoins2(char const *s1, char *s2)
{
	char	*dst;
	size_t	len;

	if (s1 && s2)
	{
		len = (ft_strlen(s1) + ft_strlen(s2));
		if ((dst = ft_strnew(len)) == NULL)
			return (NULL);
		dst = ft_strcpy(dst, s1);
		dst = ft_strcat(dst, s2);
		ft_strdel(&s2);
		return (dst);
	}
	return (0);
}
