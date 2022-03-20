/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_neighbours.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <kaittola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:40:02 by kaittola          #+#    #+#             */
/*   Updated: 2022/03/20 18:31:17 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tribe13.h"

int find_neighbour(agent_info_t info, cell_t type, coords_t center)
{
	for(int dir = 0 ; dir < 8 ; dir++)
	{
		coords_t coords = direction_to_coords(center, dir);
		cell_t neighbour = info.cells[coords.row][coords.col];
		if (neighbour == type)
		{
			return dir;
		}
	}

	return -1;
}

int find_neighbours(agent_info_t info, cell_t type)
{
	coords_t center0 = {3, 3};
	int	dir;

	dir = find_neighbour(info, type, center0);
	if (dir >= 0)
		return (dir);
	coords_t center1 = {2, 3};
	dir = find_neighbour(info, type, center1);
	if (dir >= 0)
		return (dir);
	coords_t center2 = {2, 4};
	dir = find_neighbour(info, type, center2);
	if (dir >= 0)
		return (dir);
	coords_t center3 = {3, 4};
	dir = find_neighbour(info, type, center3);
	if (dir >= 0)
		return (dir);
	coords_t center4 = {4, 4};
	dir = find_neighbour(info, type, center4);
	if (dir >= 0)
		return (dir);
	coords_t center5 = {4, 3};
	dir = find_neighbour(info, type, center5);
	if (dir >= 0)
		return (dir);
	coords_t center6 = {4, 2};
	dir = find_neighbour(info, type, center6);
	if (dir >= 0)
		return (dir);
	coords_t center7 = {3, 2};
	dir = find_neighbour(info, type, center7);
	if (dir >= 0)
		return (dir);
	coords_t center8 = {2, 2};
	dir = find_neighbour(info, type, center8);
	if (dir >= 0)
		return (dir);
	coords_t center9 = {1, 3};
	dir = find_neighbour(info, type, center9);
	if (dir >= 0)
		return (dir);
	coords_t center10 = {1, 4};
	dir = find_neighbour(info, type, center10);
	if (dir >= 0)
		return (dir);
	coords_t center11 = {1, 5};
	dir = find_neighbour(info, type, center11);
	if (dir >= 0)
		return (dir);
	coords_t center12 = {2, 5};
	dir = find_neighbour(info, type, center12);
	if (dir >= 0)
		return (dir);
	coords_t center13 = {3, 5};
	dir = find_neighbour(info, type, center13);
	if (dir >= 0)
		return (dir);
	coords_t center14 = {4, 5};
	dir = find_neighbour(info, type, center14);
	if (dir >= 0)
		return (dir);
	coords_t center15 = {5, 5};
	dir = find_neighbour(info, type, center15);
	if (dir >= 0)
		return (dir);
	coords_t center16 = {5, 4};
	dir = find_neighbour(info, type, center16);
	if (dir >= 0)
		return (dir);
	coords_t center17 = {5, 3};
	dir = find_neighbour(info, type, center17);
	if (dir >= 0)
		return (dir);
	coords_t center18 = {5, 2};
	dir = find_neighbour(info, type, center18);
	if (dir >= 0)
		return (dir);
	coords_t center19 = {5, 1};
	dir = find_neighbour(info, type, center19);
	if (dir >= 0)
		return (dir);
	coords_t center20 = {4, 1};
	dir = find_neighbour(info, type, center20);
	if (dir >= 0)
		return (dir);
	coords_t center21 = {3, 1};
	dir = find_neighbour(info, type, center21);
	if (dir >= 0)
		return (dir);
	coords_t center22 = {2, 1};
	dir = find_neighbour(info, type, center22);
	if (dir >= 0)
		return (dir);
	coords_t center23 = {1, 1};
	dir = find_neighbour(info, type, center23);
	if (dir >= 0)
		return (dir);

	return -1;
}
