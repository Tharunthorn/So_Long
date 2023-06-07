/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:02:41 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/07 19:11:07 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libs/game.h"

int	main(int argc, char **argv)
{
	t_game	game;
	t_level	level;

	if (argc != 2)
		return (0);
	level = level_init(argv[1]);
	game = game_init(level);
	game_run(game);
	return (0);
}
