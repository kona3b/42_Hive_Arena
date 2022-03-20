/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scanner.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:10:26 by lasalmi           #+#    #+#             */
/*   Updated: 2022/03/16 12:36:16 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tribe13.h"

static t_dir ft_dir(int y, int x)
{
	if (y < 3 && x < 3)
		return(NW);
	if (y < 3 && x == 3)
		return(N);
	if (y < 3 && x > 3)
		return(NE);
	if (y == 3 && x > 3)
		return(E);
	if (y > 3 && x > 3)
		return(SE);
	if (y > 3 && x == 3)
		return(S);
	if (y > 3 && x < 3)
		return(SW);
	if (y == 3 && x < 3)
		return(W);
}

t_dir scanner(agent_t_info info, t_scanstart start)
{
	int s_y = start.y;
	int s_x = start.x;
	do {
		while (s_y == 1 && s_x <= 5) 
		{
			if (info.cells[s_y][s_x] == FLOWER)
				return (ft_dir(s_y, s_x));
			else if (s_x == 5)
				break ;
			s_x++;
		}
		while (s_y <= 5 && s_x == 5) 
		{
			if (info.cells[s_y][s_x] == FLOWER)
				return (ft_dir(s_y, s_x));
			else if (s_y == 5)
				break ;
			s_y++;
		}
		while (s_y == 5 && s_x >= 1) 
		{
			if (info.cells[s_y][s_x] == FLOWER)
				return (ft_dir(s_y, s_x));
			else if (s_x == 1)
				break ;
			s_x--;
		}
		while (s_y >= 1 && s_x == 1) 
		{
			if (info.cells[s_y][s_x] == FLOWER)
				return (ft_dir(s_y, s_x));
			else if (s_y == 1)
				break ;
			s_y--;
		}
	} while (start.y != s_y && start.x != s_x);
}