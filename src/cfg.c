/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cfg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 15:40:27 by ksticks           #+#    #+#             */
/*   Updated: 2019/06/24 15:40:28 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"
#include "cfg.h"

t_cfg	read_cfg(int fd)
{
	t_cfg	cfg;
	char 	buff[16];
	int		i;

	cfg.h = -1;
	cfg.w = 0;
	i = 0;
	while (i < 16)
	{
		if (!read(fd, buff + i++, 1))
			break ;
		if (buff[i - 1] == '\n')
			break ;
	}
	if (i < 4 || buff[i - 1] != '\n')
		return (cfg);
	cfg.empty = buff[i - 4];
	cfg.obstacle = buff[i - 3];
	cfg.full = buff[i - 2];
	buff[i - 4] = 0;
	cfg.h = ft_atoi(buff);
	return (cfg);
}
