/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <kaittola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:40:53 by kaittola          #+#    #+#             */
/*   Updated: 2022/03/23 11:13:56 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tribe13.h"

command_t think(agent_info_t info)
{
	cell_t bee = info.cells[VIEW_DISTANCE][VIEW_DISTANCE];
	coords_t center = {3, 3};
	int hive_dir = find_neighbour(info, hive_cell(info.player), center);

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
		int flower_dir = find_neighbour(info, FLOWER, center);
		if (flower_dir >= 0 && ((info.player == 0 && info.bee > 0 && info.bee < 4 && info.col < 6) || (info.player == 1 && info.bee > 0 && info.bee < 4 && info.col > 23) || info.bee == 0 || info.bee == 4))
		{
			return (command_t) {
				.action = FORAGE,
				.direction = flower_dir
			};
		}
		flower_dir = find_neighbours(info, FLOWER);
		if (flower_dir >= 0 && ((info.player == 0 && info.bee > 0 && info.bee < 4 && info.col < 6) || (info.player == 1 && info.bee > 0 && info.bee < 4 && info.col > 23) || ((info.bee == 0 || info.bee == 4) && info.col > 1 && info.player == 0) || ((info.bee == 0 || info.bee == 4) && info.col < 28 && info.player == 1)))
		{
			if (check_if_type(info, flower_dir, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = flower_dir
				};
			}
			else if (flower_dir == 0 && check_if_type(info, 7, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 7
				};
			}
			else if (flower_dir == 0 && check_if_type(info, 1, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 1
				};
			}
			else if (flower_dir == 7 && check_if_type(info, 6, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 6
				};
			}
			else if (flower_dir == 6 && check_if_type(info, 0, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 0
				};
			}
			else if (check_if_type(info, flower_dir + 1, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = flower_dir + 1
				};
			}
			else if (check_if_type(info, flower_dir - 1, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = flower_dir - 1
				};
			}
			else if (check_if_type(info, flower_dir, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = flower_dir
				};
			}
			else if (flower_dir == 0 && check_if_type(info, 7, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 7
				};
			}
			else if (flower_dir == 0 && check_if_type(info, 1, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 1
				};
			}
			else if (flower_dir == 7 && check_if_type(info, 6, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 6
				};
			}
			else if (flower_dir == 6 && check_if_type(info, 0, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 0
				};
			}
			else if (check_if_type(info, flower_dir + 1, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = flower_dir + 1
				};
			}
			else if (check_if_type(info, flower_dir - 1, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = flower_dir - 1
				};
			}
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
	char *team_name = "tribe13_agent_3_mama_look_at_mee";

	agent_main(host, port, team_name, think);
}
