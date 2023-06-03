/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_save.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:46:58 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/03 12:57:42 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/utility.h"

static char	*g_player_frame_path[8][2] = {
{"textures/Link_Sprite/Link_Front_1.xpm",
	"textures/Link_Sprite/Link_Front_2.xpm"},
{"textures/textures/Link_Sprite/Link_Back_1.xpm",
	"textures/Link_Sprite/Link_Back_2.xpm"},
{"textures/Link_Sprite/Link_Side_Left_1.xpm",
	"textures/Link_Sprite/Link_Side_Left_2.xpm"},
{"textures/Link_Sprite/Link_Side_Right_1.xpm",
	"textures/Link_Sprite/Link_Side_Right_2.xpm"}
};
static char	*g_tree_tile_path = "textures/Tile_Sprite/Tree.xpm";
static char	*g_grass_tile_path = "textures/Tile_Sprite/Grass.xpm";
