/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row_iterator.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 17:36:03 by ksticks           #+#    #+#             */
/*   Updated: 2019/06/24 17:36:04 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "cfg.h"
#include "cell.h"
#include "row_iterator.h"

void	t_row_iterator_init(t_row_iterator *self, char **data, t_cfg *cfg)
{
	self->data = data;
	self->i = 0;
	self->len = 0;
	self->cfg = cfg;
	while (*data++)
		self->len++;
}

t_cell *t_row_iterator_next(t_row_iterator *self)
{
	t_cell *ret;
	int i;
	char *str;

	ret = malloc(sizeof(t_cell) * self->cfg->w);
	i = 0;
	str = self->data[self->i];
	while (i < self->cfg->w)
	{
		ret[i]->v = 2
		if (cfg->empty == str[i])
			ret[i]->v = 0;
		else if (cfg->obstacle == str[i])
			ret[i]->v = 1;
		ret->top = 0;
		ret->left = 0;
		ret->square = 0;
	}
	return (ret);
}

t_cell *t_row_iterator_get_empty(t_row_iterator *self)
{
	t_cell *ret;
	int i;

	ret = malloc(sizeof(t_cell) * self->cfg->w);
	i = 0;
	while (i < self->cfg->w)
	{
		ret[i]->v = 0
		ret->top = 0;
		ret->left = 0;
		ret->square = 0;
	}
	return (ret);
}
