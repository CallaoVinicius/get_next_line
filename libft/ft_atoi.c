/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:46:25 by lgautier          #+#    #+#             */
/*   Updated: 2017/01/12 14:23:21 by lgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *s)
{
	int		i;
	int		n;
	int		result;

	i = 0;
	n = 1;
	result = 0;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == ' ')
		i++;
	if (s[i] == '-')
		n = -1;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - 48);
		i++;
	}
	return (result * n);
}