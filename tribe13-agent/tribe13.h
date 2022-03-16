#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "agent.h"

int	check_if_type(agent_info_t info, int dir, int type);
command_t back_to_hive(agent_info_t info);
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
