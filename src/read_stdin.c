/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 17:26:27 by ksticks           #+#    #+#             */
/*   Updated: 2019/06/24 17:26:27 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "t_buff.h"
#include "cfg.h"

char	*read_stdin(void)
{
	t_buff	buff;
	t_buff	*b;
	int		read_size;
	int		n;
	int		chars_total;

	b = &buff;
	t_buff_init(b, 8);
	read_size = b->len / 2;
	chars_total = 0;
	while (1)
	{
		while (read_size + chars_total > b->len)
			t_buff_extend(b);
		n = read(0, b->buff + chars_total, read_size);
		chars_total += n;
		if (!n)
		{
			b->buff[chars_total] = 0;
			return (b->buff);
		}
	}
}

int		count_linebreaks(char *str)
{
	int n;

	n = 0;
	while (*str)
		if (*str++ == '\n')
			n++;
	return (n);
}

char	**ft_split_whitespaces(char *str, t_cfg *cfg)
{
	char	**ptr;
	char	**ret;
	int		n;

	n = count_linebreaks(str); //todo: just use h. No need to count.
	if (n != cfg->h)
		fprintf(stderr, "ERROR: \\n count mismatch: %d, %d\n", n, cfg->h);
	if (!(ret = malloc(sizeof(char*) * (n + 2))))
		return (0);
	ptr = ret;
	*ptr++ = str;
	while (*str)
		if (*str++ == '\n')
		{
			*(str - 1) = 0;
			if (!*str)
				break ;
			*ptr++ = str;
		}
	*ptr = 0;
	return (ret);
}

char	**read_data(t_cfg *cfg)
{
	char *str;
	char **data;

	str = read_stdin();
	data = ft_split_whitespaces(str, cfg);
	cfg->w = data[1] - data[0] - 1;
	return (data);
}
