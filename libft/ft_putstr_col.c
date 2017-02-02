/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pustr_color.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 12:22:25 by lgautier          #+#    #+#             */
/*   Updated: 2016/12/13 12:37:30 by lgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_col(char const *s, char const *color)
{
	ft_putstr(color);
	ft_putstr(s);
	ft_putstr(RESET);
}
