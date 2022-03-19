/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scanstart.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaittola <kaittola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:30:41 by lasalmi           #+#    #+#             */
/*   Updated: 2022/03/19 00:06:40 by kaittola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tribe13.h"

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
