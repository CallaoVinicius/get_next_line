/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freejoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 18:11:00 by lgautier          #+#    #+#             */
/*   Updated: 2017/01/31 11:42:07 by lgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_frees1join(char *s1, char const *s2)
{
	char	*tmp;

	if (s1 && s2)
	{
		tmp = ft_strdup(s1);
		ft_strdel(&s1);
		s1 = ft_strjoin(tmp, s2);
		ft_strdel(&tmp);
		return (s1);
	}
	return (0);
}
