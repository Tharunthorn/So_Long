/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 23:34:22 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/06 23:39:08 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/level.h"

t_level	level_init(void)
{
	t_level	level;

	level.dimensions.width = 10;
	level.dimensions.height = 10;
	level.map = NULL;
	return (level);
}
