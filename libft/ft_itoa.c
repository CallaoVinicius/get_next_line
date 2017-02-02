/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:25:45 by lgautier          #+#    #+#             */
/*   Updated: 2017/01/14 15:52:08 by lgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_len(int n)
{
	size_t	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_neg(int *i, int *n, char *s)
{
	if (*n == -2147483648)
	{
		s[0] = '-';
		s[1] = '2';
		*i = 2;
		*n = 147483648;
	}
	if (*n < 0)
	{
		s[0] = '-';
		*n = *n * -1;
		*i = 1;
	}
	return (s);
}

char		*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*s;

	i = 0;
	len = ft_len(n);
	if ((s = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	s[len] = '\0';
	if (n == -2147483648 || n < 0)
		s = ft_neg(&i, &n, s);
	while (len > i)
	{
		s[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (s);
}
