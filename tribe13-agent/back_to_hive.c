#include "./tribe13.h"

command_t back_to_hive(agent_info_t info)
{
	if (info.player == 0)
	{
		if (info.row > 13)
		{
			if (info.col > 2)
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
				else
				{
					return (command_t) {
						.action = MOVE,
						.direction = 6
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
			else if (check_if_type(info, 7, 0) == 1 && info.col > 0)
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
				else
				{
					return (command_t) {
						.action = MOVE,
						.direction = 6
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
			else if (check_if_type(info, 5, 0) == 1 && info.col > 0)
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
				else
				{
					return (command_t) {
						.action = MOVE,
						.direction = 2
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
			else if (check_if_type(info, 1, 0) == 1 && info.col < 29)
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
				else
				{
					return (command_t) {
						.action = MOVE,
						.direction = 2
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
			else if (check_if_type(info, 3, 0) == 1 && info.col < 29)
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