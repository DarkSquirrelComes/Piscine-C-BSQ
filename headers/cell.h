/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cell.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 17:32:30 by ksticks           #+#    #+#             */
/*   Updated: 2019/06/24 17:32:31 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CELL_H

# define CELL_H

typedef struct	s_cell
{
	char	v;
	int		top;
	int		left;
	int		square;
}				t_cell;

#endif
