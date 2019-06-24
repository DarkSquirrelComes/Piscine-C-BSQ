/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stream_find_square.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 15:19:25 by heurybia          #+#    #+#             */
/*   Updated: 2019/06/24 16:33:33 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_cfg.h"

void			check_sq(int i, int j, int l, t_cell *c)
{
	if (l > (c->x0 - c->x1 + 1))
	{
		c->x0 = i;
		c->y0 = j;
		c->x1 = i - l + 1;
		c->y1 - j - l + 1;
	}
}

void			init_sq(t_square sq)
{
	c->x0 = 0;
	c->y0 = 0;
	c->x1 = 1;
	c->y1 = 1;
}

char			*prep_str(t_cfg cfg);
{
	char		*res;
	int			i;

	res = malloc(((cfg.w + 1) * cfg.h + 1) * sizeof(char));
	i = -1;
	while (++i < cfg.h)
		re
	res[((cfg.w + 1) * cfg.h + 1)] = '\0';
	return (res);
}

char			*find_square(t_cell **data, t_cfg cfg)
{
	char		*res;
	int			i;
	int			j;
	t_square	sq;

	init_sq(&sq);
	res = prep_str(cfg);
	i = -1;
	while (++i < cfg.w)
	{
		data[i][0].top = (data[i][0].v == cfg.empty);
		data[i][0].left = (data[i][0].v == cfg.empty);
		data[i][0].square = (data[i][0].v == cfg.empty);
		check_sq(i, 0, data[i][0].square, &sq);
	}
	i = -1;
	while (++i < cfg.h)
	{
		data[0][i].top = (data[0][i].v == cfg.empty);
		data[0][i].left = (data[0][i].v == cfg.empty);
		data[0][i].square = (data[0][i].v == cfg.empty);
		check_sq(0, i, data[0][i].square, &sq);
	}
	i = 0;
	while (++i < cfg.w)
	{
		j = 0;
		while (++j < cfg.h)
		{
			data[i][j].top = (data[i][j - 1].top + 1) * (data[i][j].v == cfg.empty);
			data[i][j].left = (data[i - 1][j].left + 1) * (data[i][j].v == cfg.empty);
			data[i][j].square = min3(data[i][j].top, data[i][j].left, data[i - 1][j - 1] + 1);
			check_sq(i, j, data[i][j].square, &sq);
		}
	}
	i = sq.x1;
	while (++i <= sq.x0)
	{
		j = sq.y1;
		while (++j <= sq.y0)
			res[i * (cfg.w + 1) + j] = cfg.fill;
	}
}
