/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 13:52:13 by ksticks           #+#    #+#             */
/*   Updated: 2019/06/24 13:52:14 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include "stream_impl.h"
#include "file_impl.h"

int main(int argc, char **argv)
{
	if (argc == 1)
		stream_impl();
	else
		while (argc-- > 1)
			file_impl(*(++argv));
	if (errno)
		return (1);
	return (0);
}
