/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stream_impl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 13:58:30 by ksticks           #+#    #+#             */
/*   Updated: 2019/06/24 15:24:42 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "cfg.h"
#include "read_stdin.h"

void	stream_impl()
{
	t_cfg		cfg;
	char		**data;
	t_square	 sq;

	cfg = read_cfg(0);	// read the first line
	data = read_data(&cfg);
	printf("CFG: wh=(%d,%d), symbols = `%c` `%c` `%c`\n",
		cfg.w, cfg.h, cfg.empty, cfg.obstacle, cfg.full);
/*	sq = find_square(data, cfg);
	draw_solution(data, &cfg, sq);*/
}
