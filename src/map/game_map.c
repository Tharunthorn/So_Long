/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:21:52 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/05/31 10:43:40 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/game_map.h"

void	initialize_game_map(game_map *map, char *map_path)
{
	map->height = 500;
	map->width = 500;
	ft_strlen(map_path);
}
