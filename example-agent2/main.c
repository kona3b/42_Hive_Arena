#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "agent.h"
#include "check_if_type.c"

int find_neighbour(agent_info_t info, cell_t type)
{
    coords_t center = {VIEW_DISTANCE, VIEW_DISTANCE};

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

command_t think(agent_info_t info)
{
    cell_t bee = info.cells[VIEW_DISTANCE][VIEW_DISTANCE];

	int enemy_dir = find_neighbour(info, B1_WF);
	int free_dir = find_neighbour(info, EMPTY);

    if (is_bee_with_flower(bee))
    {
        int hive_dir = find_neighbour(info, hive_cell(info.player));
        if (hive_dir >= 0)
        {
            return (command_t) {
                .action = FORAGE,
                .direction = hive_dir
            };
        }
    }
    else
    {
	if (info.bee == 2)
		{
			if (info.col < 27)
			{
				if (info.row < 12)
				{
					if (check_if_type(info, 3, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 3
						};
					}
					else if (check_if_type(info, 2, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 2
						};
					}
					else if (check_if_type(info, 1, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 1
						};
					}
					else if (check_if_type(info, 4, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 4
						};
					}
					else if (check_if_type(info, 3, 6) == 1 || check_if_type(info, 3, 4) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 3
						};
					}
					else if (check_if_type(info, 2, 6) == 1 || check_if_type(info, 2, 4) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 2
						};
					}
					else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 1, 4) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 1
						};
					}
					else if (check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 4) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 4
						};
					}
					else
					{
						return (command_t) {
							.action = MOVE,
							.direction = 3
						};
					}
				}
				else if (info.row > 12)
				{
					if (check_if_type(info, 1, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 1
						};
					}
					else if (check_if_type(info, 2, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 2
						};
					}
					else if (check_if_type(info, 3, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 3
						};
					}
					else if (check_if_type(info, 0, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 0
						};
					}
					else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 1, 4) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 1
						};
					}
					else if (check_if_type(info, 2, 6) == 1 || check_if_type(info, 2, 4) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 2
						};
					}
					else if (check_if_type(info, 3, 6) == 1 || check_if_type(info, 3, 4) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 3
						};
					}
					else if (check_if_type(info, 0, 6) == 1 || check_if_type(info, 0, 4) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 0
						};
					}
					else
					{
						return (command_t) {
							.action = MOVE,
							.direction = 1
						};
					}
				}
				else
				{
					if (check_if_type(info, 2, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 2
						};
					}
					else if (check_if_type(info, 1, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 1
						};
					}
					else if (check_if_type(info, 3, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 3
						};
					}
					else if (check_if_type(info, 2, 6) == 1 || check_if_type(info, 2, 4) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 2
						};
					}
					else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 1, 4) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 1
						};
					}
					else if (check_if_type(info, 3, 6) == 1 || check_if_type(info, 3, 4) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 3
						};
					}
				}
			}
			else if (info.col == 27)
			{
				if (info.row == 12)
				{
					if (enemy_dir >= 0)
					{
						return (command_t) {
							.action = GUARD,
							.direction = enemy_dir
						};
					}
					else if (free_dir >= 0)
					{
						return (command_t) {
							.action = BUILD,
							.direction = free_dir
						};
					}
					else
					{
						return (command_t) {
							.action = MOVE,
							.direction = 2
						};
					}
				}
				else if (info.row < 12)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 4
					};
				}
				else if (info.row > 12)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 0
					};
				}
			}
		}
        int flower_dir = find_neighbour(info, FLOWER);
        if (flower_dir >= 0)
        {
            return (command_t) {
                .action = FORAGE,
                .direction = flower_dir
            };
        }
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
    char *team_name = "example_agent";

    agent_main(host, port, team_name, think);
}
