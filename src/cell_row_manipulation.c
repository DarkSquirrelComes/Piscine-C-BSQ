/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cell_row_manipulation.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 17:23:07 by heurybia          #+#    #+#             */
/*   Updated: 2019/06/24 17:58:50 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


t_cell		*get_empty_row(cfg);
{
	int		i;
	int		j;

	//allocate and put zero
}

void            check_sq(int i, int j, int l, t_cell *c)
{
	if (l > (c->x0 - c->x1 + 1))
	{
		c->x0 = i;
		c->y0 = j;
		c->x1 = i - l + 1;
		c->y1 - j - l + 1;
	}
}

void            init_sq(t_square sq)
{
	c->x0 = 0;
	c->y0 = 0;
	c->x1 = 1;
	c->y1 = 1;
}

int				min3(int x, int y, int z)
{
	if ((x >= y) && (x >= z))
		return (x);
	if ((y >= x) && (y >= z))
		return (y);
	return (z);
}

void		update_square(t_square)

t_squre		get_next_sq(t_cell *row, t_cell *row_old, t_square sq, t_cfg *cfg);
{
	int		i;
	
	row[0].left = (row[0].v == cfg->empty);
	row[0].square = (row[0].v == cfg->empty);
	row[0].top = (row[0].v == cfg->empty) * (row_old[0] + 1);
	i = 0;
	while (++i < cfg->w)
	{
		row[i].top = (row_old[i].top + 1) * (row[i].v == cfg.empty);
		row[i].left = (row[i - 1].left + 1) * (row[i].v == cfg.empty);
		row[i].square = min3(row[i].top, row[i].left, row_old[i - 1] + 1);
	}
}
