/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scanstart.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:30:41 by lasalmi           #+#    #+#             */
/*   Updated: 2022/03/16 11:52:00 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "agent.h"

typedef	struct s_scanstart {
	int	y;
	int	x;
}	t_scanstart;

t_scanstart	scanstart (agent_info_t info)
{
	t_scanstart starts[5] = {
		{ 3, 1 },
		{ 1, 1 },
		{ 1, 5 },
		{ 4, 5 },
		{ 5, 3 }
	};
	return (starts[info.bee]);
}
