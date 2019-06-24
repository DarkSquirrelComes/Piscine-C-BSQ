/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_impl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 14:18:38 by ksticks           #+#    #+#             */
/*   Updated: 2019/06/24 17:58:43 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "row_iterator.h"
#include "cfg.h"

void file_impl(char *f_name)
{
	t_cfg		cfg;
	t_square	sq;
	int			fd;

	fd = open(f_name, O_RDONLY);
	cfg = read_cfg(fd);
	/*sq = find_solution_per_line(fd, &cfg)
	close(fd);
	fd = open(f_name, O_RDONLY);
	draw_solution_from_file(fd, &cfg, sq);*/
}


t_square find_solution_per_line(int fd, t_cfg *cfg)
{
	t_square 		ret;
	t_row_iterator	s;
	t_row_iterator	*iterator;
	t_square		sq;
	int				height;

	init_sq(&sq);
	iterator = &s;
	t_cell *row = get_next_row(iterator, fd, cfg);

	row_old = get_empty_row(cfg);
	height = 1;
	while (1)
	{
		row = get_next_row();
		if (!row)
			break;
		cfg.h = height;
		sq = get_next_sq(row, row_old, sq, cfg);
		row_old = row;
		++height;
	}
	return sq;
	//iterator->row; // t_cell*
	//iterator->row_prev; // t_cell*
	// TODO: use callback 
	//return (ret);
}
