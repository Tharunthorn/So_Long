/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 23:34:22 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/07 00:00:15 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libs/level.h"

t_level	level_init(char *map_file)
{
	t_level	level;

	level.dimensions = level_dimensions_init(map_file);
	level.map = level_map_init(map_file, level.dimensions);
	return (level);
}
