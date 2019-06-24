/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_cfg.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 15:11:47 by ksticks           #+#    #+#             */
/*   Updated: 2019/06/24 15:49:22 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CFG_H

# define CFG_H

typedef struct	s_cfg
{
	int		w;
	int		h;
	char	full;
	char	empty;
	char	obstacle;
}				t_cfg;

typedef struct	s_square
{
	int x0;
	int y0;
	int x1;
	int y1;
}				t_square;

t_cfg			read_cfg(int fd);

#endif
