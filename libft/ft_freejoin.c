/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freejoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 18:11:00 by lgautier          #+#    #+#             */
/*   Updated: 2017/01/31 11:46:31 by lgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_freejoin(char *s1, char *s2)
{
	char	*dst;

	if (s1 && s2)
	{
		dst = ft_strjoin(s1, s2);
		ft_strdel(&s1);
		ft_strdel(&s2);
		return (dst);
	}
	return (0);
}
