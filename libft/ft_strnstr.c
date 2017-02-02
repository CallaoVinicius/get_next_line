/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 16:14:32 by lgautier          #+#    #+#             */
/*   Updated: 2017/01/12 15:00:02 by lgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *big, char const *small, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlen(small);
	if (len == 0)
		return ((char *)big);
	while (big[i] && i <= (n - len) && len <= n)
	{
		while (big[i + j] == small[j])
		{
			if (j == len - 1)
				return ((char *)big + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
