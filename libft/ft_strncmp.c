/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:27:58 by lgautier          #+#    #+#             */
/*   Updated: 2017/01/07 14:55:49 by lgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0')
			&& (unsigned char)s1[i] == (unsigned char)s2[i] && i < n)
		i++;
	if ((s1[i] == '\0' && s2[i] == '\0') || i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
