/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 09:35:15 by fhong             #+#    #+#             */
/*   Updated: 2018/05/08 19:06:46 by fhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putstr("usage: ./fillit source_file\n");
		return (0);
	}
	//read map
	if (!(list = read_map(av[1])))
	{
		ft_putstr("error\n");
		return (0);
	}
	//solve map
	//print map
	//free map and link list
	return (0);
}
