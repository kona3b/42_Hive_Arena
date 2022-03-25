/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   back_to_hive.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <kaittola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:39:55 by kaittola          #+#    #+#             */
/*   Updated: 2022/03/25 11:51:49 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tribe13.h"

command_t back_to_hive(agent_info_t info)
{
	if (info.player == 0)
	{
		if (info.row > 13)
		{
			if (info.col > 1)
			{
				if (check_if_type(info, 7, 0) == 1)
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
				else if (check_if_type(info, 6, 0) == 1)
				{
					return (command_t) {
						.action = MOVE,
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
				else if (check_if_type(info, 0, 6) == 1 || check_if_type(info, 0, 4) == 1)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 0
					};
				}
				else if (check_if_type(info, 6, 6) == 1 || check_if_type(info, 6, 4) == 1)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 6
					};
				}
				else if (check_if_type(info, 5, 0) == 1)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 5
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
			else if (check_if_type(info, 1, 0) == 1)
			{
				return (command_t) {
					.action = MOVE,
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
			else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 1, 4) == 1)
			{
				return (command_t) {
					.action = GUARD,
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
			else
			{
				return (command_t) {
					.action = MOVE,
					.direction = 0
				};
			}
		}
		else if (info.row < 11)
		{
			if (info.col > 1)
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
				else if (check_if_type(info, 5, 6) == 1 || check_if_type(info, 5, 4) == 1)
				{
					return (command_t) {
						.action = GUARD,
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
				else if (check_if_type(info, 6, 6) == 1 || check_if_type(info, 6, 4) == 1)
				{
					return (command_t) {
						.action = GUARD,
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
				else
				{
					return (command_t) {
						.action = MOVE,
						.direction = 5
					};
				}
			}
			else if (check_if_type(info, 4, 0) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 4
				};
			}
			else if (check_if_type(info, 5, 0) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 5
				};
			}
			else if (check_if_type(info, 3, 0) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 3
				};
			}
			else if (check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 4) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 4
				};
			}
			else if (check_if_type(info, 5, 6) == 1 || check_if_type(info, 5, 4) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 5
				};
			}
			else if (check_if_type(info, 3, 6) == 1 || check_if_type(info, 3, 4) == 1)
			{
				return (command_t) {
					.action = GUARD,
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
		else if (check_if_type(info, 4, 0) == 1)
		{
			return (command_t) {
				.action = MOVE,
				.direction = 4
			};
		}
		else if (check_if_type(info, 0, 0) == 1)
		{
			return (command_t) {
				.action = MOVE,
				.direction = 4
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
	else if (info.player == 1)
	{
		if (info.row > 13)
		{
			if (info.col < 28)
			{
				if (check_if_type(info, 1, 0) == 1)
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
				else if (check_if_type(info, 2, 0) == 1)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 2
					};
				}
				else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 1, 3) == 1)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 1
					};
				}
				else if (check_if_type(info, 0, 6) == 1 || check_if_type(info, 0, 3) == 1)
				{
					return (command_t) {
						.action = GUARD,
						.direction = 0
					};
				}
				else if (check_if_type(info, 2, 6) == 1 || check_if_type(info, 2, 3) == 1)
				{
					return (command_t) {
						.action = GUARD,
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
				else
				{
					return (command_t) {
						.action = MOVE,
						.direction = 1
					};
				}
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
			else if (check_if_type(info, 7, 0) == 1)
			{
				return (command_t) {
					.action = MOVE,
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
			else if (check_if_type(info, 7, 6) == 1 || check_if_type(info, 7, 3) == 1)
			{
				return (command_t) {
					.action = GUARD,
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
			else
			{
				return (command_t) {
					.action = MOVE,
					.direction = 0
				};
			}
		}
		else if (info.row < 11)
		{
			if (info.col < 28)
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
				else if (check_if_type(info, 3, 6) == 1 || check_if_type(info, 3, 3) == 1)
				{
					return (command_t) {
						.action = GUARD,
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
				else if (check_if_type(info, 2, 6) == 1 || check_if_type(info, 2, 4) == 1)
				{
					return (command_t) {
						.action = GUARD,
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
				else
				{
					return (command_t) {
						.action = MOVE,
						.direction = 3
					};
				}
			}
			else if (check_if_type(info, 4, 0) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 4
				};
			}
			else if (check_if_type(info, 3, 0) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 3
				};
			}
			else if (check_if_type(info, 5, 0) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 5
				};
			}
			else if (check_if_type(info, 4, 6) == 1 || check_if_type(info, 4, 3) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 4
				};
			}
			else if (check_if_type(info, 3, 6) == 1 || check_if_type(info, 3, 3) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 3
				};
			}
			else if (check_if_type(info, 5, 6) == 1 || check_if_type(info, 5, 3) == 1)
			{
				return (command_t) {
					.action = GUARD,
					.direction = 5
				};
			}
			else if (check_if_type(info, 6, 0) == 1)
			{
				return (command_t) {
					.action = MOVE,
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
		else if (check_if_type(info, 3, 0) == 1)
		{
			return (command_t) {
				.action = MOVE,
				.direction = 3
			};
		}
		else if (check_if_type(info, 2, 6) == 1 || check_if_type(info, 2, 3) == 1)
		{
			return (command_t) {
				.action = GUARD,
				.direction = 2
			};
		}
		else if (check_if_type(info, 1, 6) == 1 || check_if_type(info, 1, 3) == 1)
		{
			return (command_t) {
				.action = GUARD,
				.direction = 1
			};
		}
		else if (check_if_type(info, 3, 6) == 1 || check_if_type(info, 3, 3) == 1)
		{
			return (command_t) {
				.action = GUARD,
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
		else if (check_if_type(info, 0, 0) == 1)
		{
			return (command_t) {
				.action = MOVE,
				.direction = 4
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
	else
	{
		return (command_t) {
			.action = MOVE,
			.direction = rand() % 8
		};
	}
}
