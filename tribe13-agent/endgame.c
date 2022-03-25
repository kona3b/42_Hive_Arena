#include "tribe13.h"

command_t endgame(agent_info_t info)
{
	coords_t center = {3, 3};
	int enemy_dir = find_neighbour(info, B1_WF, center);
	int enemy_dir2 = find_neighbour(info, B0_WF, center);
	int free_dir = find_neighbour(info, EMPTY, center);

	if (info.player == 0)
	{
		if (info.bee == 0)
		{
			if (info.row < 24)
			{
				if (info.col < 26)
				{
					if (info.row > 10)
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
						else if (check_if_type(info, 0, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 0
							};
						}
						else if (check_if_type(info, 7, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 7
							};
						}
						else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 1, 4) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 1
							};
						}
						else if (check_if_type(info, 0, 6) == 1 || check_if_type(info, 0, 4) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 0
							};
						}
						else if (check_if_type(info, 7, 6) == 1 || check_if_type(info, 7, 4) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 7
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
					else if (info.row < 10)
					{
						if (check_if_type(info, 3, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 3
							};
						}
						else if (check_if_type(info, 4, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 4
							};
						}
						else if (check_if_type(info, 2, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 2
							};
						}
						else if (check_if_type(info, 5, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 5
							};
						}
						else if (check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 4) == 1)
						{
							return (command_t) {
								.action = GUARD,
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
						else
						{
							return (command_t) {
								.action = MOVE,
								.direction = 4
							};
						}
					}
					else if (check_if_type(info, 2, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 2
						};
					}
					else if (check_if_type(info, 3, 0) == 3)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 3
						};
					}
					else if (check_if_type(info, 1, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 1
						};
					}
					else if (check_if_type(info, 0, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 0
						};
					}
					else if (check_if_type(info, 4, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 4
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
					else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 1, 4) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 1
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
				else if (info.col > 26)
				{
					if (check_if_type(info, 6, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 6
						};
					}
					else if (check_if_type(info, 7, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 7
						};
					}
					else if (check_if_type(info, 5, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 5
						};
					}
					else if (check_if_type(info, 6, 6) == 1 || check_if_type(info, 6, 4) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 6
						};
					}
					else if (check_if_type(info, 7, 6) == 1 || check_if_type(info, 7, 4) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 7
						};
					}
					else if (check_if_type(info, 5, 6) == 1 || check_if_type(info, 5, 4) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 5
						};
					}
				}
				else if (check_if_type(info, 4, 0) == 1 && info.row < 10)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 4
					};
				}
				else if ((check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 4) == 1) && info.row < 10)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 4
					};
				}
				else if (check_if_type(info, 0, 0) == 1 && info.row > 10)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 0
					};
				}
				else if ((check_if_type(info, 0, 6) == 1 || check_if_type(info, 0, 4) == 1) && info.row > 10)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 0
					};
				}
				else if (enemy_dir >= 0)
				{
					return (command_t) {
						.action = GUARD,
						.direction = enemy_dir
					};
				}
				else if (check_if_type(info, 1, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 1
					};
				}
				else if (check_if_type(info, 2, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 2
					};
				}
				else if (check_if_type(info, 3, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 3
					};
				}
				else
				{
					return (command_t) {
						.action = FORAGE,
						.direction = 6
					};
				}
			}
			else if (check_if_type(info, 6, 0) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 6
				};
			}
			else if (check_if_type(info, 6, 6) == 1 || check_if_type(info, 6, 4) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 6
				};
			}
			else if (check_if_type(info, 6, 1) == 1 || check_if_type(info, 6, 2) == 1 || check_if_type(info, 6, 3) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 0
				};
			}
			else
			{
				return (command_t) {
					.action = MOVE,
					.direction = rand() % 8
				};
			}
		}
		if (info.bee == 1)
		{
			if (info.row < 24)
			{
				if (info.col < 26)
				{
					if (info.row > 11)
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
						else if (check_if_type(info, 0, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 0
							};
						}
						else if (check_if_type(info, 7, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 7
							};
						}
						else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 1, 4) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 1
							};
						}
						else if (check_if_type(info, 0, 6) == 1 || check_if_type(info, 0, 4) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 0
							};
						}
						else if (check_if_type(info, 7, 6) == 1 || check_if_type(info, 7, 4) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 7
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
					else if (info.row < 11)
					{
						if (check_if_type(info, 3, 0) == 1)
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
						else if (check_if_type(info, 2, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 2
							};
						}
						else if (check_if_type(info, 5, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 5
							};
						}
						else if (check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 4) == 1)
						{
							return (command_t) {
								.action = GUARD,
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
						else
						{
							return (command_t) {
								.action = MOVE,
								.direction = 4
							};
						}
					}
					else if (check_if_type(info, 2, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 2
						};
					}
					else if (check_if_type(info, 3, 0) == 3)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 3
						};
					}
					else if (check_if_type(info, 1, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 1
						};
					}
					else if (check_if_type(info, 0, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 0
						};
					}
					else if (check_if_type(info, 4, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 4
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
					else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 1, 4) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 1
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
				else if (info.col > 26)
				{
					if (check_if_type(info, 6, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 6
						};
					}
					else if (check_if_type(info, 7, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 7
						};
					}
					else if (check_if_type(info, 5, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 5
						};
					}
					else if ((check_if_type(info, 6, 6) == 1 || check_if_type(info, 6, 4) == 1))
					{
						return (command_t) {
							.action = GUARD,
							.direction = 6
						};
					}
					else if ((check_if_type(info, 7, 6) == 1 || check_if_type(info, 7, 4) == 1))
					{
						return (command_t) {
							.action = GUARD,
							.direction = 7
						};
					}
					else if ((check_if_type(info, 5, 6) == 1 || check_if_type(info, 5, 4) == 1))
					{
						return (command_t) {
							.action = GUARD,
							.direction = 5
						};
					}
				}
				else if (check_if_type(info, 4, 0) == 1 && info.row < 11)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 4
					};
				}
				else if ((check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 4) == 1) && info.row < 11)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 4
					};
				}
				else if (check_if_type(info, 0, 0) == 1 && info.row > 11)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 0
					};
				}
				else if ((check_if_type(info, 0, 6) == 1 || check_if_type(info, 0, 4) == 1) && info.row > 11)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 0
					};
				}
				else if (enemy_dir >= 0)
				{
					return (command_t) {
						.action = GUARD,
						.direction = enemy_dir
					};
				}
				else if (check_if_type(info, 1, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 1
					};
				}
				else if (check_if_type(info, 2, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 2
					};
				}
				else if (check_if_type(info, 3, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 3
					};
				}
				else
				{
					return (command_t) {
						.action = FORAGE,
						.direction = 6
					};
				}
			}
			else if (check_if_type(info, 6, 0) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 6
				};
			}
			else if (check_if_type(info, 6, 6) == 1 || check_if_type(info, 6, 4) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 6
				};
			}
			else if (check_if_type(info, 6, 1) == 1 || check_if_type(info, 6, 2) == 1 || check_if_type(info, 6, 3) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 0
				};
			}
			else
			{
				return (command_t) {
					.action = MOVE,
					.direction = rand() % 8
				};
			}
		}
		if (info.bee == 2)
		{
			if (info.row < 24)
			{
				if (info.col < 26)
				{
					if (info.row > 12)
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
						else if (check_if_type(info, 0, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 0
							};
						}
						else if (check_if_type(info, 7, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 7
							};
						}
						else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 1, 4) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 1
							};
						}
						else if (check_if_type(info, 0, 6) == 1 || check_if_type(info, 0, 4) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 0
							};
						}
						else if (check_if_type(info, 7, 6) == 1 || check_if_type(info, 7, 4) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 7
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
					else if (info.row < 12)
					{
						if (check_if_type(info, 3, 0) == 1)
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
						else if (check_if_type(info, 2, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 2
							};
						}
						else if (check_if_type(info, 5, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 5
							};
						}
						else if (check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 4) == 1)
						{
							return (command_t) {
								.action = GUARD,
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
						else
						{
							return (command_t) {
								.action = MOVE,
								.direction = 4
							};
						}
					}
					else if (check_if_type(info, 2, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 2
						};
					}
					else if (check_if_type(info, 3, 0) == 3)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 3
						};
					}
					else if (check_if_type(info, 1, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 1
						};
					}
					else if (check_if_type(info, 0, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 0
						};
					}
					else if (check_if_type(info, 4, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 4
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
					else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 1, 4) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 1
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
				else if (info.col > 26)
				{
					if (check_if_type(info, 6, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 6
						};
					}
					else if (check_if_type(info, 7, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 7
						};
					}
					else if (check_if_type(info, 5, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 5
						};
					}
					else if ((check_if_type(info, 6, 6) == 1 || check_if_type(info, 6, 4) == 1))
					{
						return (command_t) {
							.action = GUARD,
							.direction = 6
						};
					}
					else if ((check_if_type(info, 7, 6) == 1 || check_if_type(info, 7, 4) == 1))
					{
						return (command_t) {
							.action = GUARD,
							.direction = 7
						};
					}
					else if ((check_if_type(info, 5, 6) == 1 || check_if_type(info, 5, 4) == 1))
					{
						return (command_t) {
							.action = GUARD,
							.direction = 5
						};
					}
				}
				else if (check_if_type(info, 4, 0) == 1 && info.row < 12)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 4
					};
				}
				else if ((check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 4) == 1) && info.row < 12)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 4
					};
				}
				else if (check_if_type(info, 0, 0) == 1 && info.row > 12)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 0
					};
				}
				else if ((check_if_type(info, 0, 6) == 1 || check_if_type(info, 0, 4) == 1) && info.row > 12)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 0
					};
				}
				else if (enemy_dir >= 0)
				{
					return (command_t) {
						.action = GUARD,
						.direction = enemy_dir
					};
				}
				else if (check_if_type(info, 1, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 1
					};
				}
				else if (check_if_type(info, 2, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 2
					};
				}
				else if (check_if_type(info, 3, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 3
					};
				}
				else
				{
					return (command_t) {
						.action = FORAGE,
						.direction = 6
					};
				}
			}
			else if (check_if_type(info, 6, 0) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 6
				};
			}
			else if (check_if_type(info, 6, 6) == 1 || check_if_type(info, 6, 4) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 6
				};
			}
			else if (check_if_type(info, 6, 1) == 1 || check_if_type(info, 6, 2) == 1 || check_if_type(info, 6, 3) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 0
				};
			}
			else
			{
				return (command_t) {
					.action = MOVE,
					.direction = rand() % 8
				};
			}
		}
		if (info.bee == 3)
		{
			if (info.row < 24)
			{
				if (info.col < 26)
				{
					if (info.row > 13)
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
						else if (check_if_type(info, 0, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 0
							};
						}
						else if (check_if_type(info, 7, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 7
							};
						}
						else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 1, 4) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 1
							};
						}
						else if (check_if_type(info, 0, 6) == 1 || check_if_type(info, 0, 4) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 0
							};
						}
						else if (check_if_type(info, 7, 6) == 1 || check_if_type(info, 7, 4) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 7
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
					else if (info.row < 13)
					{
						if (check_if_type(info, 3, 0) == 1)
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
						else if (check_if_type(info, 2, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 2
							};
						}
						else if (check_if_type(info, 5, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 5
							};
						}
						else if (check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 4) == 1)
						{
							return (command_t) {
								.action = GUARD,
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
						else
						{
							return (command_t) {
								.action = MOVE,
								.direction = 4
							};
						}
					}
					else if (check_if_type(info, 2, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 2
						};
					}
					else if (check_if_type(info, 3, 0) == 3)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 3
						};
					}
					else if (check_if_type(info, 1, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 1
						};
					}
					else if (check_if_type(info, 0, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 0
						};
					}
					else if (check_if_type(info, 4, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 4
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
					else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 1, 4) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 1
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
				else if (info.col > 26)
				{
					if (check_if_type(info, 6, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 6
						};
					}
					else if (check_if_type(info, 7, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 7
						};
					}
					else if (check_if_type(info, 5, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 5
						};
					}
					else if ((check_if_type(info, 6, 6) == 1 || check_if_type(info, 6, 4) == 1))
					{
						return (command_t) {
							.action = GUARD,
							.direction = 6
						};
					}
					else if ((check_if_type(info, 7, 6) == 1 || check_if_type(info, 7, 4) == 1))
					{
						return (command_t) {
							.action = GUARD,
							.direction = 7
						};
					}
					else if ((check_if_type(info, 5, 6) == 1 || check_if_type(info, 5, 4) == 1))
					{
						return (command_t) {
							.action = GUARD,
							.direction = 5
						};
					}
				}
				else if (check_if_type(info, 4, 0) == 1 && info.row < 13)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 4
					};
				}
				else if ((check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 4) == 1) && info.row < 13)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 4
					};
				}
				else if (check_if_type(info, 0, 0) == 1 && info.row > 13)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 0
					};
				}
				else if ((check_if_type(info, 0, 6) == 1 || check_if_type(info, 0, 4) == 1) && info.row > 13)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 0
					};
				}
				else if (enemy_dir >= 0)
				{
					return (command_t) {
						.action = GUARD,
						.direction = enemy_dir
					};
				}
				else if (check_if_type(info, 1, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 1
					};
				}
				else if (check_if_type(info, 2, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 2
					};
				}
				else if (check_if_type(info, 3, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 3
					};
				}
				else
				{
					return (command_t) {
						.action = FORAGE,
						.direction = 6
					};
				}
			}
			else if (check_if_type(info, 6, 0) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 6
				};
			}
			else if (check_if_type(info, 6, 6) == 1 || check_if_type(info, 6, 4) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 6
				};
			}
			else if (check_if_type(info, 6, 1) == 1 || check_if_type(info, 6, 2) == 1 || check_if_type(info, 6, 3) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 0
				};
			}
			else
			{
				return (command_t) {
					.action = MOVE,
					.direction = rand() % 8
				};
			}
		}
		if (info.bee == 4)
		{
			if (info.row < 24)
			{
				if (info.col < 26)
				{
					if (info.row > 14)
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
						else if (check_if_type(info, 0, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 0
							};
						}
						else if (check_if_type(info, 7, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 7
							};
						}
						else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 1, 4) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 1
							};
						}
						else if (check_if_type(info, 0, 6) == 1 || check_if_type(info, 0, 4) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 0
							};
						}
						else if (check_if_type(info, 7, 6) == 1 || check_if_type(info, 7, 4) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 7
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
					else if (info.row < 14)
					{
						if (check_if_type(info, 3, 0) == 1)
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
						else if (check_if_type(info, 2, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 2
							};
						}
						else if (check_if_type(info, 5, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 5
							};
						}
						else if (check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 4) == 1)
						{
							return (command_t) {
								.action = GUARD,
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
						else
						{
							return (command_t) {
								.action = MOVE,
								.direction = 4
							};
						}
					}
					else if (check_if_type(info, 2, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 2
						};
					}
					else if (check_if_type(info, 3, 0) == 3)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 3
						};
					}
					else if (check_if_type(info, 1, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 1
						};
					}
					else if (check_if_type(info, 0, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 0
						};
					}
					else if (check_if_type(info, 4, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 4
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
					else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 1, 4) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 1
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
				else if (info.col > 26)
				{
					if (check_if_type(info, 6, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 6
						};
					}
					else if (check_if_type(info, 7, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 7
						};
					}
					else if (check_if_type(info, 5, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 5
						};
					}
					else if ((check_if_type(info, 6, 6) == 1 || check_if_type(info, 6, 4) == 1))
					{
						return (command_t) {
							.action = GUARD,
							.direction = 6
						};
					}
					else if ((check_if_type(info, 7, 6) == 1 || check_if_type(info, 7, 4) == 1))
					{
						return (command_t) {
							.action = GUARD,
							.direction = 7
						};
					}
					else if ((check_if_type(info, 5, 6) == 1 || check_if_type(info, 5, 4) == 1))
					{
						return (command_t) {
							.action = GUARD,
							.direction = 5
						};
					}
				}
				else if (check_if_type(info, 4, 0) == 1 && info.row < 14)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 4
					};
				}
				else if ((check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 4) == 1) && info.row < 14)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 4
					};
				}
				else if (check_if_type(info, 0, 0) == 1 && info.row > 14)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 0
					};
				}
				else if ((check_if_type(info, 0, 6) == 1 || check_if_type(info, 0, 4) == 1) && info.row > 14)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 0
					};
				}
				else if (enemy_dir >= 0)
				{
					return (command_t) {
						.action = GUARD,
						.direction = enemy_dir
					};
				}
				else if (check_if_type(info, 1, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 1
					};
				}
				else if (check_if_type(info, 2, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 2
					};
				}
				else if (check_if_type(info, 3, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 3
					};
				}
				else
				{
					return (command_t) {
						.action = FORAGE,
						.direction = 6
					};
				}
			}
			else if (check_if_type(info, 6, 0) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 6
				};
			}
			else if (check_if_type(info, 6, 6) == 1 || check_if_type(info, 6, 4) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 6
				};
			}
			else if (check_if_type(info, 6, 1) == 1 || check_if_type(info, 6, 2) == 1 || check_if_type(info, 6, 3) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 0
				};
			}
			else
			{
				return (command_t) {
					.action = MOVE,
					.direction = rand() % 8
				};
			}
		}
	}
	if (info.player == 1)
	{
		if (info.bee == 0)
		{
			if (info.row < 24)
			{
				if (info.col > 3)
				{
					if (info.row > 10)
					{
						if (check_if_type(info, 7, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 7
							};
						}
						else if (check_if_type(info, 6, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 6
							};
						}
						else if (check_if_type(info, 0, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 0
							};
						}
						else if (check_if_type(info, 1, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 1
							};
						}
						else if (check_if_type(info, 7, 6) == 1 || check_if_type(info, 7, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 7
							};
						}
						else if (check_if_type(info, 0, 6) == 1 || check_if_type(info, 0, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 0
							};
						}
						else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 1, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 1
							};
						}
						else
						{
							return (command_t) {
								.action = MOVE,
								.direction = 7
							};
						}
					}
					else if (info.row < 10)
					{
						if (check_if_type(info, 5, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 5
							};
						}
						else if (check_if_type(info, 4, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 4
							};
						}
						else if (check_if_type(info, 6, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 6
							};
						}
						else if (check_if_type(info, 3, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 3
							};
						}
						else if (check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 4
							};
						}
						else if (check_if_type(info, 5, 6) == 1 || check_if_type(info, 5, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 5
							};
						}
						else if (check_if_type(info, 6, 6) == 1 || check_if_type(info, 6, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 6
							};
						}
						else
						{
							return (command_t) {
								.action = MOVE,
								.direction = 4
							};
						}
					}
					else if (check_if_type(info, 6, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 6
						};
					}
					else if (check_if_type(info, 5, 0) == 3)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 6
						};
					}
					else if (check_if_type(info, 7, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 7
						};
					}
					else if (check_if_type(info, 0, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 0
						};
					}
					else if (check_if_type(info, 4, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 4
						};
					}
					else if (check_if_type(info, 6, 6) == 1 || check_if_type(info, 6, 3) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 6
						};
					}
					else if (check_if_type(info, 5, 6) == 1 || check_if_type(info, 5, 3) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 5
						};
					}
					else if (check_if_type(info, 7, 6) == 1 || check_if_type(info, 7, 3) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 7
						};
					}
					else
					{
						return (command_t) {
							.action = MOVE,
							.direction = 6
						};
					}
				}
				else if (info.col < 3)
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
					else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 2, 4) == 1)
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
				else if (check_if_type(info, 4, 0) == 1 && info.row < 10)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 4
					};
				}
				else if ((check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 3) == 1) && info.row < 10)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 4
					};
				}
				else if (check_if_type(info, 0, 0) == 1 && info.row > 10)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 0
					};
				}
				else if ((check_if_type(info, 0, 6) == 1 || check_if_type(info, 4, 3) == 1) && info.row > 10)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 0
					};
				}
				else if (enemy_dir >= 0)
				{
					return (command_t) {
						.action = GUARD,
						.direction = enemy_dir
					};
				}
				else if (check_if_type(info, 7, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 7
					};
				}
				else if (check_if_type(info, 6, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 6
					};
				}
				else if (check_if_type(info, 5, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 5
					};
				}
				else
				{
					return (command_t) {
						.action = FORAGE,
						.direction = 2
					};
				}
			}
			else if (check_if_type(info, 2, 0) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 2
				};
			}
			else if (check_if_type(info, 2, 6) == 1 || check_if_type(info, 2, 3) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 2
				};
			}
			else if (check_if_type(info, 2, 1) == 1 || check_if_type(info, 2, 2) == 1 || check_if_type(info, 6, 4) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 0
				};
			}
			else
			{
				return (command_t) {
					.action = MOVE,
					.direction = rand() % 8
				};
			}
		}
		if (info.bee == 1)
		{
			if (info.row < 24)
			{
				if (info.col > 3)
				{
					if (info.row > 11)
					{
						if (check_if_type(info, 7, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 7
							};
						}
						else if (check_if_type(info, 6, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 6
							};
						}
						else if (check_if_type(info, 0, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 0
							};
						}
						else if (check_if_type(info, 1, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 1
							};
						}
						else if (check_if_type(info, 7, 6) == 1 || check_if_type(info, 7, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 7
							};
						}
						else if (check_if_type(info, 0, 6) == 1 || check_if_type(info, 0, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 0
							};
						}
						else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 1, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 1
							};
						}
						else
						{
							return (command_t) {
								.action = MOVE,
								.direction = 7
							};
						}
					}
					else if (info.row < 11)
					{
						if (check_if_type(info, 5, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 5
							};
						}
						else if (check_if_type(info, 4, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 4
							};
						}
						else if (check_if_type(info, 6, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 6
							};
						}
						else if (check_if_type(info, 3, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 3
							};
						}
						else if (check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 4
							};
						}
						else if (check_if_type(info, 5, 6) == 1 || check_if_type(info, 5, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 5
							};
						}
						else if (check_if_type(info, 6, 6) == 1 || check_if_type(info, 6, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 6
							};
						}
						else
						{
							return (command_t) {
								.action = MOVE,
								.direction = 4
							};
						}
					}
					else if (check_if_type(info, 6, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 6
						};
					}
					else if (check_if_type(info, 5, 0) == 3)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 6
						};
					}
					else if (check_if_type(info, 7, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 7
						};
					}
					else if (check_if_type(info, 0, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 0
						};
					}
					else if (check_if_type(info, 4, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 4
						};
					}
					else if (check_if_type(info, 6, 6) == 1 || check_if_type(info, 6, 3) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 6
						};
					}
					else if (check_if_type(info, 5, 6) == 1 || check_if_type(info, 5, 3) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 5
						};
					}
					else if (check_if_type(info, 7, 6) == 1 || check_if_type(info, 7, 3) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 7
						};
					}
					else
					{
						return (command_t) {
							.action = MOVE,
							.direction = 6
						};
					}
				}
				else if (info.col < 3)
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
					else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 2, 4) == 1)
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
				else if (check_if_type(info, 4, 0) == 1 && info.row < 11)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 4
					};
				}
				else if ((check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 3) == 1) && info.row < 11)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 4
					};
				}
				else if (check_if_type(info, 0, 0) == 1 && info.row > 11)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 0
					};
				}
				else if ((check_if_type(info, 0, 6) == 1 || check_if_type(info, 4, 3) == 1) && info.row > 11)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 0
					};
				}
				else if (enemy_dir >= 0)
				{
					return (command_t) {
						.action = GUARD,
						.direction = enemy_dir
					};
				}
				else if (check_if_type(info, 7, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 7
					};
				}
				else if (check_if_type(info, 6, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 6
					};
				}
				else if (check_if_type(info, 5, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 5
					};
				}
				else
				{
					return (command_t) {
						.action = FORAGE,
						.direction = 2
					};
				}
			}
			else if (check_if_type(info, 2, 0) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 2
				};
			}
			else if (check_if_type(info, 2, 6) == 1 || check_if_type(info, 2, 3) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 2
				};
			}
			else if (check_if_type(info, 2, 1) == 1 || check_if_type(info, 2, 2) == 1 || check_if_type(info, 6, 4) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 0
				};
			}
			else
			{
				return (command_t) {
					.action = MOVE,
					.direction = rand() % 8
				};
			}
		}
		if (info.bee == 2)
		{
			if (info.row < 24)
			{
				if (info.col > 3)
				{
					if (info.row > 12)
					{
						if (check_if_type(info, 7, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 7
							};
						}
						else if (check_if_type(info, 6, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 6
							};
						}
						else if (check_if_type(info, 0, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 0
							};
						}
						else if (check_if_type(info, 1, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 1
							};
						}
						else if (check_if_type(info, 7, 6) == 1 || check_if_type(info, 7, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 7
							};
						}
						else if (check_if_type(info, 0, 6) == 1 || check_if_type(info, 0, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 0
							};
						}
						else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 1, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 1
							};
						}
						else
						{
							return (command_t) {
								.action = MOVE,
								.direction = 7
							};
						}
					}
					else if (info.row < 12)
					{
						if (check_if_type(info, 5, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 5
							};
						}
						else if (check_if_type(info, 4, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 4
							};
						}
						else if (check_if_type(info, 6, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 6
							};
						}
						else if (check_if_type(info, 3, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 3
							};
						}
						else if (check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 4
							};
						}
						else if (check_if_type(info, 5, 6) == 1 || check_if_type(info, 5, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 5
							};
						}
						else if (check_if_type(info, 6, 6) == 1 || check_if_type(info, 6, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 6
							};
						}
						else
						{
							return (command_t) {
								.action = MOVE,
								.direction = 4
							};
						}
					}
					else if (check_if_type(info, 6, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 6
						};
					}
					else if (check_if_type(info, 5, 0) == 3)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 6
						};
					}
					else if (check_if_type(info, 7, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 7
						};
					}
					else if (check_if_type(info, 0, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 0
						};
					}
					else if (check_if_type(info, 4, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 4
						};
					}
					else if (check_if_type(info, 6, 6) == 1 || check_if_type(info, 6, 3) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 6
						};
					}
					else if (check_if_type(info, 5, 6) == 1 || check_if_type(info, 5, 3) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 5
						};
					}
					else if (check_if_type(info, 7, 6) == 1 || check_if_type(info, 7, 3) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 7
						};
					}
					else
					{
						return (command_t) {
							.action = MOVE,
							.direction = 6
						};
					}
				}
				else if (info.col < 3)
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
					else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 2, 4) == 1)
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
				else if (check_if_type(info, 4, 0) == 1 && info.row < 12)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 4
					};
				}
				else if ((check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 3) == 1) && info.row < 12)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 4
					};
				}
				else if (check_if_type(info, 0, 0) == 1 && info.row > 12)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 0
					};
				}
				else if ((check_if_type(info, 0, 6) == 1 || check_if_type(info, 4, 3) == 1) && info.row > 12)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 0
					};
				}
				else if (enemy_dir >= 0)
				{
					return (command_t) {
						.action = GUARD,
						.direction = enemy_dir
					};
				}
				else if (check_if_type(info, 7, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 7
					};
				}
				else if (check_if_type(info, 6, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 6
					};
				}
				else if (check_if_type(info, 5, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 5
					};
				}
				else
				{
					return (command_t) {
						.action = FORAGE,
						.direction = 2
					};
				}
			}
			else if (check_if_type(info, 2, 0) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 2
				};
			}
			else if (check_if_type(info, 2, 6) == 1 || check_if_type(info, 2, 3) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 2
				};
			}
			else if (check_if_type(info, 2, 1) == 1 || check_if_type(info, 2, 2) == 1 || check_if_type(info, 6, 4) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 0
				};
			}
			else
			{
				return (command_t) {
					.action = MOVE,
					.direction = rand() % 8
				};
			}
		}
		if (info.bee == 3)
		{
			if (info.row < 24)
			{
				if (info.col > 3)
				{
					if (info.row > 13)
					{
						if (check_if_type(info, 7, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 7
							};
						}
						else if (check_if_type(info, 6, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 6
							};
						}
						else if (check_if_type(info, 0, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 0
							};
						}
						else if (check_if_type(info, 1, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 1
							};
						}
						else if (check_if_type(info, 7, 6) == 1 || check_if_type(info, 7, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 7
							};
						}
						else if (check_if_type(info, 0, 6) == 1 || check_if_type(info, 0, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 0
							};
						}
						else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 1, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 1
							};
						}
						else
						{
							return (command_t) {
								.action = MOVE,
								.direction = 7
							};
						}
					}
					else if (info.row < 13)
					{
						if (check_if_type(info, 5, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 5
							};
						}
						else if (check_if_type(info, 4, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 4
							};
						}
						else if (check_if_type(info, 6, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 6
							};
						}
						else if (check_if_type(info, 3, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 3
							};
						}
						else if (check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 4
							};
						}
						else if (check_if_type(info, 5, 6) == 1 || check_if_type(info, 5, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 5
							};
						}
						else if (check_if_type(info, 6, 6) == 1 || check_if_type(info, 6, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 6
							};
						}
						else
						{
							return (command_t) {
								.action = MOVE,
								.direction = 4
							};
						}
					}
					else if (check_if_type(info, 6, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 6
						};
					}
					else if (check_if_type(info, 5, 0) == 3)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 6
						};
					}
					else if (check_if_type(info, 7, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 7
						};
					}
					else if (check_if_type(info, 0, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 0
						};
					}
					else if (check_if_type(info, 4, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 4
						};
					}
					else if (check_if_type(info, 6, 6) == 1 || check_if_type(info, 6, 3) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 6
						};
					}
					else if (check_if_type(info, 5, 6) == 1 || check_if_type(info, 5, 3) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 5
						};
					}
					else if (check_if_type(info, 7, 6) == 1 || check_if_type(info, 7, 3) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 7
						};
					}
					else
					{
						return (command_t) {
							.action = MOVE,
							.direction = 6
						};
					}
				}
				else if (info.col < 3)
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
					else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 2, 4) == 1)
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
				else if (check_if_type(info, 4, 0) == 1 && info.row < 13)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 4
					};
				}
				else if ((check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 3) == 1) && info.row < 13)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 4
					};
				}
				else if (check_if_type(info, 0, 0) == 1 && info.row > 13)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 0
					};
				}
				else if ((check_if_type(info, 0, 6) == 1 || check_if_type(info, 4, 3) == 1) && info.row > 13)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 0
					};
				}
				else if (enemy_dir >= 0)
				{
					return (command_t) {
						.action = GUARD,
						.direction = enemy_dir
					};
				}
				else if (check_if_type(info, 7, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 7
					};
				}
				else if (check_if_type(info, 6, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 6
					};
				}
				else if (check_if_type(info, 5, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 5
					};
				}
				else
				{
					return (command_t) {
						.action = FORAGE,
						.direction = 2
					};
				}
			}
			else if (check_if_type(info, 2, 0) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 2
				};
			}
			else if (check_if_type(info, 2, 6) == 1 || check_if_type(info, 2, 3) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 2
				};
			}
			else if (check_if_type(info, 2, 1) == 1 || check_if_type(info, 2, 2) == 1 || check_if_type(info, 6, 4) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 0
				};
			}
			else
			{
				return (command_t) {
					.action = MOVE,
					.direction = rand() % 8
				};
			}
		}
		if (info.bee == 4)
		{
			if (info.row < 24)
			{
				if (info.col > 3)
				{
					if (info.row > 14)
					{
						if (check_if_type(info, 7, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 7
							};
						}
						else if (check_if_type(info, 6, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 6
							};
						}
						else if (check_if_type(info, 0, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 0
							};
						}
						else if (check_if_type(info, 1, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 1
							};
						}
						else if (check_if_type(info, 7, 6) == 1 || check_if_type(info, 7, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 7
							};
						}
						else if (check_if_type(info, 0, 6) == 1 || check_if_type(info, 0, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 0
							};
						}
						else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 1, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 1
							};
						}
						else
						{
							return (command_t) {
								.action = MOVE,
								.direction = 7
							};
						}
					}
					else if (info.row < 14)
					{
						if (check_if_type(info, 5, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 5
							};
						}
						else if (check_if_type(info, 4, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 4
							};
						}
						else if (check_if_type(info, 6, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 6
							};
						}
						else if (check_if_type(info, 3, 0) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 3
							};
						}
						else if (check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 4
							};
						}
						else if (check_if_type(info, 5, 6) == 1 || check_if_type(info, 5, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 5
							};
						}
						else if (check_if_type(info, 6, 6) == 1 || check_if_type(info, 6, 3) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 6
							};
						}
						else
						{
							return (command_t) {
								.action = MOVE,
								.direction = 4
							};
						}
					}
					else if (check_if_type(info, 6, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 6
						};
					}
					else if (check_if_type(info, 5, 0) == 3)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 6
						};
					}
					else if (check_if_type(info, 7, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 7
						};
					}
					else if (check_if_type(info, 0, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 0
						};
					}
					else if (check_if_type(info, 4, 0) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 4
						};
					}
					else if (check_if_type(info, 6, 6) == 1 || check_if_type(info, 6, 3) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 6
						};
					}
					else if (check_if_type(info, 5, 6) == 1 || check_if_type(info, 5, 3) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 5
						};
					}
					else if (check_if_type(info, 7, 6) == 1 || check_if_type(info, 7, 3) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 7
						};
					}
					else
					{
						return (command_t) {
							.action = MOVE,
							.direction = 6
						};
					}
				}
				else if (info.col < 3)
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
					else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 2, 4) == 1)
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
				else if (check_if_type(info, 4, 0) == 1 && info.row < 14)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 4
					};
				}
				else if ((check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 3) == 1) && info.row < 14)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 4
					};
				}
				else if (check_if_type(info, 0, 0) == 1 && info.row > 14)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 0
					};
				}
				else if ((check_if_type(info, 0, 6) == 1 || check_if_type(info, 4, 3) == 1) && info.row > 14)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 0
					};
				}
				else if (enemy_dir >= 0)
				{
					return (command_t) {
						.action = GUARD,
						.direction = enemy_dir
					};
				}
				else if (check_if_type(info, 7, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 7
					};
				}
				else if (check_if_type(info, 6, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 6
					};
				}
				else if (check_if_type(info, 5, 0) == 1)
				{
					return (command_t) {
						.action = BUILD,
						.direction = 5
					};
				}
				else
				{
					return (command_t) {
						.action = FORAGE,
						.direction = 2
					};
				}
			}
			else if (check_if_type(info, 2, 0) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 2
				};
			}
			else if (check_if_type(info, 2, 6) == 1 || check_if_type(info, 2, 3) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 2
				};
			}
			else if (check_if_type(info, 2, 1) == 1 || check_if_type(info, 2, 2) == 1 || check_if_type(info, 6, 4) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 0
				};
			}
			else
			{
				return (command_t) {
					.action = MOVE,
					.direction = rand() % 8
				};
			}
		}
	}
	else
	{
		return (command_t) {
			.action = MOVE,
			.direction = rand() % 8
		};
	}
}
