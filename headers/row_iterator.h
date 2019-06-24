/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_row_iterator.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 15:38:58 by ksticks           #+#    #+#             */
/*   Updated: 2019/06/24 15:39:00 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_ROW_ITERATOR_H

# define T_ROW_ITERATOR_H

#include "cfg.h"

typedef struct	s_row_iterator
{
	char	**data;
	int		i;
	t_cfg	*cfg;
}				t_row_iterator;

void	t_row_iterator_init(char **data);
t_cell	*t_row_iterator_next(t_row_iterator *iterator, t_cfg *cfg);
t_cell	*t_row_iterator_get_empty(t_row_iterator *self)

#endif
