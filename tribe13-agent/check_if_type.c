#include "./tribe13.h"

int	check_if_type(agent_info_t info, int dir, int type)
{
	cell_t want;

	if (type == 0)
		want = 0;
	if (type == 1)
		want = 1;
	if (type == 2)
		want = 2;
	if (type == 3)
		want = 3;
	if (type == 4)
		want = 4;
	if (type == 5)
		want = 5;
	if (type == 6)
		want = 6;
	if (type == 7)
		want = 7;
	coords_t center = {VIEW_DISTANCE, VIEW_DISTANCE};

	coords_t coords = direction_to_coords(center, dir);
	cell_t neighbour = info.cells[coords.row][coords.col];
	if (neighbour == want)
		return 1;
	else
		return -1;
}
