#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "agent.h"

int	check_if_type(agent_info_t info, int dir, int type);
command_t back_to_hive(agent_info_t info);