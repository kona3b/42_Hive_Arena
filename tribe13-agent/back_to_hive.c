#include <stdlib.h>
#include "agent.h"
#include "check_if_free.c"

command_t back_to_hive(agent_info_t info)
{
	if (info.player == 0)
	{
		if (info.row > 13)
		{
			if (info.col > 2)
			{
				if (check_if_free(info, 7) == 1)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 7
					};
				}
				else if (check_if_free(info, 0) == 1)
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
						.direction = 6
					};
				}
			}
			else if (check_if_free(info, 0) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 0
				};
			}
			else if (check_if_free(info, 7) == 1 && info.col > 0)
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
					.direction = 1
				};
			}
		}
		else if (info.row < 11)
		{
			if (info.col > 2)
			{
				if (check_if_free(info, 5) == 1)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 5
					};
				}
				else if (check_if_free(info, 4) == 1)
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
			else if (check_if_free(info, 4) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 4
				};
			}
			else if (check_if_free(info, 5) == 1 && info.col > 0)
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
					.direction = 3
				};
			}
		}
		else if (check_if_free(info, 6) == 1)
		{
			return (command_t) {
				.action = MOVE,
				.direction = 6
			};
		}
		else if (check_if_free(info, 7) == 1)
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
	else if (info.player == 1)
	{
		if (info.row > 13)
		{
			if (info.col < 27)
			{
				if (check_if_free(info, 1) == 1)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 1
					};
				}
				else if (check_if_free(info, 0) == 1)
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
						.direction = 2
					};
				}
			}
			else if (check_if_free(info, 0) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 0
				};
			}
			else if (check_if_free(info, 1) == 1 && info.col < 29)
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
					.direction = 7
				};
			}
		}
		else if (info.row < 11)
		{
			if (info.col < 27)
			{
				if (check_if_free(info, 3) == 1)
				{
					return (command_t) {
						.action = MOVE,
						.direction = 3
					};
				}
				else if (check_if_free(info, 4) == 1)
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
			else if (check_if_free(info, 4) == 1)
			{
				return (command_t) {
					.action = MOVE,
					.direction = 4
				};
			}
			else if (check_if_free(info, 3) == 1 && info.col < 29)
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
					.direction = 5
				};
			}
		}
		else if (check_if_free(info, 2) == 1)
		{
			return (command_t) {
				.action = MOVE,
				.direction = 2
			};
		}
		else if (check_if_free(info, 1) == 1)
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
	return (command_t) {
		.action = MOVE,
		.direction = rand() % 8
	};
}