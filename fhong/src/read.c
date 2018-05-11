/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 14:59:20 by fhong             #+#    #+#             */
/*   Updated: 2018/05/11 15:12:08 by fhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"
/*
** produce tetris number in our way. Look at tetris.txt
*/

int		my_tetris_num(char *str)
{
	int tetris_num;
	int index;

	tetris_num = 0;
	index = 0;
	while (*str != '#')
		str++;
	while (str[index++])
	{
		if (str[index] == '#')
		{
			if (index < 10)
				tetris_num = tetris_num * 10 + index;
			else
				tetris_num = tetris_num * 100 + index;
		}
	}
	return (tetris_num);
}

/*
**
*/

int		check_tetris(int tetris)
{
	int index;

	index = 0;
	while (tetris != tetris_map[index] && tetris_map[index])
		index++;
	if (index == 19)
		return (0);
	return (move_map[index]);
}

/*
** store every 21 character in buffer
** 4 blocks = 1 tetris
*/

int		*read_tetris(int fd)
{
	char	*buf;
	int		*move;

	buf = ft_strnew(21);
	if (!(move = (int*)malloc(sizeof(int) * 27)))
		return (0);
	while (read(fd, buf, 21))
	{
		if (!check_tetris(my_tetris_num(buf)))
		{
			ft_memdel((void **)&buf);
			ft_memdel((void **)&move);
			return (0);
		}
		*move++ = check_tetris(my_tetris_num(buf));
	}
	ft_memdel((void **)&buf);
	return (move);
}
