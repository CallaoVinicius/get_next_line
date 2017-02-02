/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 18:15:32 by lgautier          #+#    #+#             */
/*   Updated: 2017/01/14 17:39:07 by lgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*dst;

	i = 0;
	if (s && f)
	{
		dst = ft_strnew(ft_strlen(s));
		if (dst)
		{
			while (s[i])
			{
				dst[i] = f(s[i]);
				i++;
			}
			dst[i] = '\0';
			return (dst);
		}
	}
	return (NULL);
}
