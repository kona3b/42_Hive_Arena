#include "agent.h"

int	check_if_free(agent_info_t info, int dir)
{
	coords_t center = {VIEW_DISTANCE, VIEW_DISTANCE};

	coords_t coords = direction_to_coords(center, dir);
	cell_t neighbour = info.cells[coords.row][coords.col];
	if (neighbour == 0)
		return 1;
	else
		return -1;
}