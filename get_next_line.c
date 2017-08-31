/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 12:22:48 by lgautier          #+#    #+#             */
/*   Updated: 2017/02/02 14:39:02 by lgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		rest(char **line, char **s, char **tmp)
{
	*line = ft_strdup(*s);
	ft_strdel(s);
	ft_strdel(tmp);
	return (1);
}

int		reader(const int fd, char **line, char **s, char **tmp)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];

	ret = 0;
	if (!*s)
		*s = ft_strnew(1);
	while ((ret = read(fd, buf, BUFF_SIZE)) && ret != -1)
	{
		buf[ret] = '\0';
		if (ft_strchr(buf, 10))
		{
			*tmp = ft_strdup(ft_strchr(buf, 10) + 1);
			*line = ft_freejoin(*s, ft_strcdup(buf, '\n'));
		}
		else if (ret < BUFF_SIZE)
			*line = ft_frees1join(*s, buf);
		if (ret < BUFF_SIZE || ft_strchr(buf, 10))
			return (1);
		*s = ft_frees1join(*s, buf);
	}
	if (ft_strlen(*s))
		return (rest(line, s, tmp));
	ft_strdel(s);
	return (ret);
}

int		get_next_line(const int fd, char **line)
{
	char		*s;
	static char	*tmp = NULL;

	if (fd < 0)
		return (-1);
	s = NULL;
	if (tmp && ft_strlen(tmp))
	{
		s = ft_strdup(tmp);
		ft_strdel(&tmp);
		if (ft_strchr(s, 10))
		{
			tmp = ft_strdup(ft_strchr(s, 10) + 1);
			*line = ft_strcdup(s, '\n');
			ft_strdel(&s);
			return (1);
		}
	}
	return (reader(fd, line, &s, &tmp));
}
