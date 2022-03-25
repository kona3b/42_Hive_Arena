#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "agent.h"

#define EMPTY 0
#define B0 1
#define B1 2
#define B0_WF 3
#define B1_WF 4
#define FLOWER 5
#define WALL 6
#define HIVE_0 7
#define HIVE_1 8
#define OUT 9

int	check_if_type(agent_info_t info, int dir, int type);
int find_neighbour(agent_info_t info, cell_t type, coords_t center);
int find_neighbours(agent_info_t info, cell_t type);
command_t back_to_hive(agent_info_t info);
command_t endgame(agent_info_t info);
command_t second_breakfast(agent_info_t info);
command_t first_blood(agent_info_t info);