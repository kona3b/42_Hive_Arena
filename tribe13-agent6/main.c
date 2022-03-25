/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <kaittola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:40:53 by kaittola          #+#    #+#             */
/*   Updated: 2022/03/24 18:49:42 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tribe13.h"

command_t think(agent_info_t info)
{
	int			enemy;
	if (info.player == 0)
		enemy = B1_WF;
	else
		enemy = B0_WF;
	cell_t		bee = info.cells[VIEW_DISTANCE][VIEW_DISTANCE];
	coords_t	center = {3, 3};
	int			hive_dir = find_neighbour(info, hive_cell(info.player), center);
	int			flower_dir = find_neighbour(info, FLOWER, center);
	int			flower_dir2 = find_neighbours(info, FLOWER);
	int			enemy_dir = find_neighbour(info, enemy, center);
	int			enemy_dir2 = find_neighbours(info, enemy);

	if (is_bee_with_flower(bee))
	{
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
		if (flower_dir >= 0 && ((info.player == 0 && info.col > 19) || (info.player == 1 && info.col < 10) ))
		{
			return (command_t) {
				.action = FORAGE,
				.direction = flower_dir
			};
		}
		else if ((info.player == 0 && info.col > 19) || (info.player == 1 && info.col < 10))
		{
			if (enemy_dir >= 0)
			{
				return (command_t) {
					.action = GUARD,
					.direction = enemy_dir
				};
			}
			else if (enemy_dir2 >= 0)
			{
				return (command_t) {
					.action = MOVE,
					.direction = enemy_dir2
				};
			}
		}
		return (follow_strategy(info));
	}
}

int main(int argc, char **argv)
{
	if (argc < 3)
		panic("Usage: ./agent arena_host arena_ip");

	srand(time(NULL) + getpid());

	char *host = argv[1];
	int port = atoi(argv[2]);
	char *team_name = "tribe13_agent_6_some_fries_with_that";

	agent_main(host, port, team_name, think);
}
