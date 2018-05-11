/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 12:31:53 by fhong             #+#    #+#             */
/*   Updated: 2018/05/11 15:15:22 by fhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

int		main(int ac, char **av)
{
	int	*list;

	if (ac != 2)
	{
		ft_putstr("usage: fillit input\n");
		return (1);
	}
	if ((list = read_tetris(open(av[1], O_RDONLY))) == NULL)
	{
		ft_putstr("erre\n");
		return (1);
	}
	while (*list)
		printf("%d\n", *list++);
	return (0);
}
