/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 10:26:31 by fhong             #+#    #+#             */
/*   Updated: 2018/05/11 15:13:59 by fhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FITTIT_H
# define FITTIT_H

const int		tetris_map[19] =
{
	51015, 123, 1510, 567, 5910, 127, 5610, 456, 4510, 126,
	51011, 345, 1611, 125, 156, 145, 5611, 167, 459
};

const int		move_map[19] =
{
	333, 222, 433, 322, 334, 223, 3312, 3422, 3314, 2243,
	332, 344, 233, 22443, 234, 212, 323, 232, 343
};

int				my_tetrus_num(char *str);
int				check_tetris(int tetris);
int				*read_tetris(int fd);

/*
typedef struct	s_move
{
	t_point		*next;
	int			move;
}				t_move;

typedef struct	s_list
{
	t_list		*next;
	t_list		*pre;
	t_tetris	*data;
}				t_list;
*/
#endif
