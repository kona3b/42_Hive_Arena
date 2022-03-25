/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <kaittola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:40:53 by kaittola          #+#    #+#             */
/*   Updated: 2022/03/25 05:02:05 by kaittola         ###   ########.fr       */
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
	else if (info.turn < 70)//FIRST_BLOOD
		return (second_breakfast(info));

	else if (info.turn >= 70 && info.turn < 500)//SECOND_BREAKFAST
	{
		if (flower_dir >= 0)
		{
			return (command_t) {
				.action = FORAGE,
				.direction = flower_dir
			};
		}
		else if (flower_dir2 >= 0)
		{
			if (check_if_type(info, flower_dir2, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = flower_dir2
				};
			}
			else if (flower_dir2 == 0 && check_if_type(info, 7, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 7
				};
			}
			else if (flower_dir2 == 0 && check_if_type(info, 1, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 1
				};
			}
			else if (flower_dir2 == 7 && check_if_type(info, 6, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 6
				};
			}
			else if (flower_dir2 == 7 && check_if_type(info, 0, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 0
				};
			}
			else if (check_if_type(info, flower_dir2 + 1, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = flower_dir2 + 1
				};
			}
			else if (check_if_type(info, flower_dir2 - 1, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = flower_dir2 - 1
				};
			}
			else if (check_if_type(info, flower_dir2, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = flower_dir2
				};
			}
			else if (flower_dir2 == 0 && check_if_type(info, 7, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 7
				};
			}
			else if (flower_dir2 == 0 && check_if_type(info, 1, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 1
				};
			}
			else if (flower_dir2 == 7 && check_if_type(info, 6, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 6
				};
			}
			else if (flower_dir2 == 7 && check_if_type(info, 0, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 0
				};
			}
			else if (check_if_type(info, flower_dir2 + 1, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = flower_dir2 + 1
				};
			}
			else if (check_if_type(info, flower_dir2 - 1, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = flower_dir2 - 1
				};
			}
		}
		return (second_breakfast(info));
	}
	else if (info.turn >= 500 && info.turn < 800)//ACT_NATURAL
	{
		if (flower_dir >= 0)
		{
			return (command_t) {
				.action = FORAGE,
				.direction = flower_dir
			};
		}
		else if (flower_dir2 >= 0)
		{
			if (check_if_type(info, flower_dir2, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = flower_dir2
				};
			}
			else if (flower_dir2 == 0 && check_if_type(info, 7, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 7
				};
			}
			else if (flower_dir2 == 0 && check_if_type(info, 1, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 1
				};
			}
			else if (flower_dir2 == 7 && check_if_type(info, 6, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 6
				};
			}
			else if (flower_dir2 == 7 && check_if_type(info, 0, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 0
				};
			}
			else if (check_if_type(info, flower_dir2 + 1, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = flower_dir2 + 1
				};
			}
			else if (check_if_type(info, flower_dir2 - 1, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = flower_dir2 - 1
				};
			}
			else if (check_if_type(info, flower_dir2, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = flower_dir2
				};
			}
			else if (flower_dir2 == 0 && check_if_type(info, 7, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 7
				};
			}
			else if (flower_dir2 == 0 && check_if_type(info, 1, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 1
				};
			}
			else if (flower_dir2 == 7 && check_if_type(info, 6, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 6
				};
			}
			else if (flower_dir2 == 7 && check_if_type(info, 0, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 0
				};
			}
			else if (check_if_type(info, flower_dir2 + 1, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = flower_dir2 + 1
				};
			}
			else if (check_if_type(info, flower_dir2 - 1, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = flower_dir2 - 1
				};
			}
		}
		return (first_blood(info));
	}
	else if (info.turn >= 800)//ENDGAME
	{
		if (flower_dir >= 0)
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
		return (endgame(info));
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
	char *team_name = "tribe13_agent_7_whats_in_the_box";

	agent_main(host, port, team_name, think);
}
