/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_position.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:32:44 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/10 14:30:21 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libs/player.h"

t_dimensions	player_position_init(t_level level)
{
	t_dimensions	position;

	position.height = 0;
	while (position.height < level.dimensions.height)
	{
		position.width = 0;
		while (position.width < level.dimensions.width)
		{
			if (level.map[position.height][position.width] == 'P')
			{
				position.width *= PIXEL_WIDTH;
				position.height *= PIXEL_HEIGHT;
				ft_printf("Player position width:%d\n", position.width);
				ft_printf("Player position height:%d\n", position.height);
				return (position);
			}
			position.width++;
		}
		position.height++;
	}
	ft_printf("Error: No player found in map.\n");
	exit(1);
	return (position);
}
