/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level_dimensions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:00:32 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/07 00:04:24 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libs/level.h"

t_dimensions	level_dimensions_init(char *map_file)
{
	t_dimensions	dimensions;

	dimensions.width = 20;
	dimensions.height = 10;
	return (dimensions);
}

