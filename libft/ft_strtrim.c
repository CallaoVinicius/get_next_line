/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 11:14:46 by lgautier          #+#    #+#             */
/*   Updated: 2017/01/19 12:00:54 by lgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (s)
	{
		start = 0;
		while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
			start++;
		end = ft_strlen(s) - 1;
		while (start != ft_strlen(s) && (s[end] == ' ' ||
					s[end] == '\n' || s[end] == '\t'))
			end--;
		str = ft_strndup(s + start, end - start + 1);
		return (str);
	}
	return (NULL);
}
