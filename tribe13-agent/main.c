/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <kaittola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:40:53 by kaittola          #+#    #+#             */
/*   Updated: 2022/03/20 15:09:10 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tribe13.h"

command_t think(agent_info_t info)
{
	cell_t bee = info.cells[VIEW_DISTANCE][VIEW_DISTANCE];
	coords_t center = {3, 3};

	if (is_bee_with_flower(bee))
	{
		coords_t center = {3, 3};
		int hive_dir = find_neighbour(info, hive_cell(info.player), center);

		if (hive_dir >= 0)
		{
			return (command_t) {
				.action = FORAGE,
				.direction = hive_dir
			};
		}
		else
			return (back_to_hive(info));
	}
	else
	{
		int flower_dir = find_neighbour(info, FLOWER, center);
		if (flower_dir >= 0 && info.bee != 2)
		{
			return (command_t) {
				.action = FORAGE,
				.direction = flower_dir
			};
		}
		flower_dir = find_neighbours(info, FLOWER);
		if (flower_dir >= 0 && info.bee != 2)
		{
			return (command_t) {
				.action = MOVE,
				.direction = flower_dir
			};
		}
		else
			return (follow_strategy(info));
	}
	return (command_t) {
		.action = MOVE,
		.direction = rand() % 8
	};
}

int main(int argc, char **argv)
{
	if (argc < 3)
		panic("Usage: ./agent arena_host arena_ip");

	srand(time(NULL) + getpid());

	char *host = argv[1];
	int port = atoi(argv[2]);
	char *team_name = "tribe13_agent";

	agent_main(host, port, team_name, think);
}
