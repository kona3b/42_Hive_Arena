/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_destroy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <kaittola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:54:47 by kaittola          #+#    #+#             */
/*   Updated: 2022/03/24 17:06:08 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tribe13.h"

command_t search_and_destroy(agent_info_t info)
{
	int			enemy;
	if (info.player == 0)
		enemy = B1_WF;
	else
		enemy = B0_WF;
	coords_t	center = {3, 3};
	int			flower_dir = find_neighbour(info, FLOWER, center);
	int			flower_dir2 = find_neighbours(info, FLOWER);
	int			enemy_dir = find_neighbour(info, enemy, center);
//	int			enemy_dir2 = find_neighbours(info, enemy);
//	int 		free_dir = find_neighbour(info, EMPTY, center);

	if (enemy_dir >= 0)
	{
		return (command_t) {
			.action = GUARD,
			.direction = 1
		};
	}
	else if (info.player == 0 && info.bee == 2)
	{
		if (info.row < 21)
		{
			if (info.col < 15)
			{
				if (check_if_type(info, 2, EMPTY) == 1)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 2
					};
				}
				else if (check_if_type(info, 1, EMPTY) == 1)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 1
					};
				}
				else if (check_if_type(info, 3, EMPTY) == 1)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 3
					};
				}
				else if (check_if_type(info, 0, EMPTY) == 1)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 0
					};
				}
				else if (check_if_type(info, 4, EMPTY) == 1)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 4
					};
				}
				else if (check_if_type(info, 2, WALL) == 1)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 2
					};
				}
				else if (check_if_type(info, 1, WALL) == 1)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 1
					};
				}
				else if (check_if_type(info, 3, WALL) == 1)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 3
					};
				}
				else if (check_if_type(info, 0, WALL) == 1)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 0
					};
				}
				else if (check_if_type(info, 4, WALL) == 1)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 4
					};
				}
			}
			else if (info.col < 25)
			{
				if (info.row > 3)
				{
					if (info.col < 18)
					{
						if (check_if_type(info, 1, EMPTY) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 1
							};
						}
						else if (check_if_type(info, 0, EMPTY) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 0
							};
						}
						else if (check_if_type(info, 2, EMPTY) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 2
							};
						}
						else if (check_if_type(info, 1, WALL) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 1
							};
						}
						else if (check_if_type(info, 0, WALL) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 0
							};
						}
						else if (check_if_type(info, 2, WALL) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 2
							};
						}
					}
					else
					{
						if (check_if_type(info, 0, EMPTY) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 0
							};
						}
						else if (check_if_type(info, 1, EMPTY) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 1
							};
						}
						else if (check_if_type(info, 2, EMPTY) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 2
							};
						}
						else if (check_if_type(info, 7, EMPTY) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 7
							};
						}
						else if (check_if_type(info, 0, WALL) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 0
							};
						}
						else if (check_if_type(info, 1, WALL) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 1
							};
						}
						else if (check_if_type(info, 7, WALL) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 7
							};
						}
						else if (check_if_type(info, 2, WALL) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 2
							};
						}
					}
				}
				else if (info.row < 3)
				{
					if (info.col < 18)
					{
						if (check_if_type(info, 3, EMPTY) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 3
							};
						}
						else if (check_if_type(info, 4, EMPTY) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 4
							};
						}
						else if (check_if_type(info, 2, EMPTY) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 2
							};
						}
						else if (check_if_type(info, 3, WALL) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 3
							};
						}
						else if (check_if_type(info, 4, WALL) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 4
							};
						}
						else if (check_if_type(info, 2, WALL) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 2
							};
						}
					}
					else
					{
						if (check_if_type(info, 3, EMPTY) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 3
							};
						}
						else if (check_if_type(info, 4, EMPTY) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 3
							};
						}
						else if (check_if_type(info, 5, EMPTY) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 5
							};
						}
						else if (check_if_type(info, 2, EMPTY) == 1)
						{
							return (command_t) {
								.action = MOVE,
								.direction = 2
							};
						}
						else if (check_if_type(info, 3, WALL) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 3
							};
						}
						else if (check_if_type(info, 4, WALL) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 4
							};
						}
						else if (check_if_type(info, 5, WALL) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 5
							};
						}
						else if (check_if_type(info, 2, WALL) == 1)
						{
							return (command_t) {
								.action = GUARD,
								.direction = 2
							};
						}
					}
				}
				else
				{
					if (check_if_type(info, 2, EMPTY) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 2
						};
					}
					else if (check_if_type(info, 1, EMPTY) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 1
						};
					}
					else if (check_if_type(info, 3, EMPTY) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 3
						};
					}
					else if (check_if_type(info, 0, EMPTY) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 0
						};
					}
					else if (check_if_type(info, 4, EMPTY) == 1)
					{
						return (command_t) {
							.action = MOVE,
							.direction = 4
						};
					}
					else if (check_if_type(info, 2, WALL) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 2
						};
					}
					else if (check_if_type(info, 1, WALL) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 1
						};
					}
					else if (check_if_type(info, 3, WALL) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 3
						};
					}
					else if (check_if_type(info, 0, WALL) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 0
						};
					}
					else if (check_if_type(info, 4, WALL) == 1)
					{
						return (command_t) {
							.action = GUARD,
							.direction = 4
						};
					}
				}
			}
			else if (info.col > 25)
			{
				if (check_if_type(info, 5, EMPTY) == 1)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 5
					};
				}
				else if (check_if_type(info, 4, EMPTY) == 1)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 4
					};
				}
				else if (check_if_type(info, 3, EMPTY) == 1)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 3
					};
				}
				else if (check_if_type(info, 6, EMPTY) == 1)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 6
					};
				}
				else if (check_if_type(info, 2, EMPTY) == 1)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 2
					};
				}
				else if (check_if_type(info, 5, WALL) == 1)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 5
					};
				}
				else if (check_if_type(info, 4, WALL) == 1)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 4
					};
				}
				else if (check_if_type(info, 3, WALL) == 1)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 3
					};
				}
				else if (check_if_type(info, 2, WALL) == 1)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 2
					};
				}
				else if (check_if_type(info, 6, WALL) == 1)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 6
					};
				}
			}
			else
			{
				if (check_if_type(info, 4, EMPTY) == 1)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 4
					};
				}
				else if (check_if_type(info, 5, EMPTY) == 1)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 5
					};
				}
				else if (check_if_type(info, 3, EMPTY) == 1)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 3
					};
				}
				else if (check_if_type(info, 6, EMPTY) == 1)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 6
					};
				}
				else if (check_if_type(info, 2, EMPTY) == 1)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 2
					};
				}
				else if (check_if_type(info, 4, WALL) == 1)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 4
					};
				}
				else if (check_if_type(info, 5, WALL) == 1)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 5
					};
				}
				else if (check_if_type(info, 3, WALL) == 1)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 3
					};
				}
				else if (check_if_type(info, 2, WALL) == 1)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 2
					};
				}
				else if (check_if_type(info, 6, WALL) == 1)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 6
					};
				}
			}
		}
		else if (info.row > 21)
		{
			if (flower_dir >= 0)
			{
				return (command_t) {
					.action = GUARD,
					.direction = flower_dir
				};
			}
			else if (flower_dir2 >= 0 && flower_dir2 <= 3)
			{
				return (command_t) {
					.action = MOVE,
					.direction = flower_dir2
				};
			}
			else if (check_if_type(info, 7, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 7
				};
			}
			else if (check_if_type(info, 0, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 0
				};
			}
			else if (check_if_type(info, 6, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 6
				};
			}
			else if (check_if_type(info, 5, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 5
				};
			}
			else if (check_if_type(info, 4, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 4
				};
			}
			else if (check_if_type(info, 7, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 7
				};
			}
			else if (check_if_type(info, 0, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 0
				};
			}
			else if (check_if_type(info, 6, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 6
				};
			}
			else if (check_if_type(info, 5, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 5
				};
			}
			else if (check_if_type(info, 4, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 4
				};
			}
		}
		else if (info.col > 10)
		{
			if (flower_dir >= 0)
			{
				return (command_t) {
					.action = GUARD,
					.direction = flower_dir
				};
			}
			else if (flower_dir2 >= 0 && flower_dir2 <= 3)
			{
				return (command_t) {
					.action = MOVE,
					.direction = flower_dir2
				};
			}
			else if (check_if_type(info, 6, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 6
				};
			}
			else if (check_if_type(info, 7, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 7
				};
			}
			else if (check_if_type(info, 5, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 5
				};
			}
			else if (check_if_type(info, 4, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 4
				};
			}
			else if (check_if_type(info, 0, EMPTY) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 0
				};
			}
			else if (check_if_type(info, 6, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 6
				};
			}
			else if (check_if_type(info, 7, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 7
				};
			}
			else if (check_if_type(info, 5, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 5
				};
			}
			else if (check_if_type(info, 4, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 4
				};
			}
			else if (check_if_type(info, 0, WALL) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 0
				};
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
	return (command_t) {
		.action = MOVE,
		.direction = rand() % 8
	};
}
