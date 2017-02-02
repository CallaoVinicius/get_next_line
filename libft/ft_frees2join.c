/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freejoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 18:11:00 by lgautier          #+#    #+#             */
/*   Updated: 2017/01/31 11:44:29 by lgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_frees2join(char const *s1, char *s2)
{
	char	*tmp;

	if (s1 && s2)
	{
		tmp = ft_strdup(s2);
		ft_strdel(&s2);
		s2 = ft_strjoin(s1, tmp);
		ft_strdel(&tmp);
		return (s2);
	}
	return (0);
}
